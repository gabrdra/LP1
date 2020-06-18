#include <iostream>
#include <fstream>
int main(int argc, char const *argv[])
{
    int lineNumber = 0;
    std::string message;
    std::string operation;
    std::ofstream fileWrite("message.txt", std::ios::app);
    std::ifstream fileRead("message.txt");
    if (!fileRead.is_open())
    {
        std::cerr << "Erro ao abrir o arquivo" << std::endl;
        return 1;
    }
    
    //verifica se há argumentos sendo passados
    if(argc == 1){
        std::cerr << "Uso: " << argv[0] << " add <mensagem>" << std::endl;
        std::cerr << "Uso: " << argv[0] << " list" << std::endl;
        return 1;
    }
    operation = argv[1];
    
    if (operation != "add" && operation != "list")
    {
        std::cerr << "Uso: " << argv[0] << " add <mensagem>" << std::endl;
        std::cerr << "Uso: " << argv[0] << " list" << std::endl;
        return 1;
    }
    // caso operation seja add mas não for passado mais parametros
    if (argc == 2 && operation == "add")
    {
        std::cout << "Escreva a mensagem: "<< std::endl;
        getline(std::cin, message);
        fileWrite << message << std::endl;

    }
    //adiciona a mensagem para a variável message
    if (argc >= 3 && operation == "add")
    {
        message += argv[2];
        fileWrite << message << std::endl;
    }
    //lê a mensagem
    lineNumber =0;
    if (argc == 2 && operation == "list"){
        while (!fileRead.eof())
        {
            std::getline(fileRead, message);
            if (message.size() == 0)
            {
                continue;
            }
            lineNumber++;
            std::cout << lineNumber << "- " << message << std::endl;
        }
    }
    //std::cout << "Mensagem: " << message <<std::endl;
    return 0;
}
