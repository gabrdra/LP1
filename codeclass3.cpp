#include <iostream>
#include <fstream>
int main(int argc, char const *argv[])
{
    std::string message;
    std::string operation;
    std::ofstream file("message.txt");
    //verifica se há argumentos sendo passados
    if(argc == 1){
        std::cout << "Uso: " << argv[0] << " add <mensagem>" <<std::endl;
        return 1;
    }
    operation = argv[1];
    
    if (operation != "add")
    {
        std::cout << "Uso: " << argv[0] << " add <mensagem>" <<std::endl;
        return 1;
    }
    // caso operation seja add mas não for passado mais parametros
    if (argc == 2)
    {
        std::cout << "Escreva a mensagem: "<<std::endl;
        getline(std::cin, message);

    }
    //adiciona a mensagem para a variável message
    if (argc >= 3)
    {
        message += argv[2];
    }
    //adiona a mensagem ao arquivo
    file << message << std::endl;
    std::cout << "Mensagem: " << message <<std::endl;
    file.close();
    return 0;
}
