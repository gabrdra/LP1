#include <iostream>

int main(int argc, char const *argv[])
{
    std::string message;
    std::string operation;
    int i = 0;
    //verifica se há argumentos sendo passados
    if(argc <= 2){
        std::cout << "Uso: " << argv[0] << " add <mensagem>" <<std::endl;
        return 1;
    }
    operation = argv[1];
    
    if (operation != "add")
    {
        std::cout << "Uso: " << argv[0] << " add <mensagem>" <<std::endl;
        return 1;
    }
    //adiciona a mensagem para a variável message
    for (i = 0; i < argc-2; i++)
    {
        message += argv[i+2];
        message += " ";
    }
    
    std::cout << "Mensagem: " << message <<std::endl;
    return 0;
}
