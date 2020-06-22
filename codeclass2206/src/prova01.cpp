//Prova 01
// João Gabriel Reis Saraiva de Andrade
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

std::string format_current_date(const std::string &format) {
  std::time_t time = std::time(nullptr);
  char result[1024];

  std::strftime(result, sizeof(result), format.c_str(), std::localtime(&time));

  return std::string(result);
}

std::string get_current_date() { return format_current_date("%d/%m/%Y"); }

std::string get_current_time() { return format_current_date("%H:%M:%S"); }

void printErrorMessage( std::string programName){
    std::cerr << "Uso: " << programName << " add <mensagem>" << std::endl;
    std::cerr << "Uso: " << programName << " list" << std::endl;
}

int main(int argc, char *argv[]) {
  //std::cout << get_current_date() << std::endl;
  //std::cout << get_current_time() << std::endl;
    std::string message;
    std::string operation;
    std::ofstream fileWrite("message.txt", std::ios::app);
    std::ifstream fileRead("message.txt");
    std::string programName = argv[0];
    std::string today = "# "+ get_current_date();
    bool dateExist = false;
    if (!fileRead.is_open())
    {
        std::cerr << "Erro ao abrir o arquivo" << std::endl;
        return 1;
    }
    
    //verifica se há argumentos sendo passados
    if(argc == 1){
        printErrorMessage(programName);
        return 1;
    }
    operation = argv[1];
    
    if (operation != "add" && operation != "list")
    {
        printErrorMessage(programName);
        return 1;
    }
    if (operation == "list" && argc > 2)
    {
        printErrorMessage(programName);
        return 1;
    }
    
    // caso operation seja add mas não for passado mais parametros
    if (argc == 2 && operation == "add")
    {
        //Verifica se uma data já foi adicionada, caso não tenha sido adiciona
        while (!fileRead.eof())
        {
            std::getline(fileRead, message);
            if (message == today)
            {
                dateExist = true;
                continue;
            }
            
        }
        if (!dateExist)
        {
            fileWrite << today << std::endl;
        }
        
        //Apresenta prompt de escrita para o usuario e adiciona o texto já formatado
        std::cout << "Escreva a mensagem: "<< std::endl;
        getline(std::cin, message);
        fileWrite <<"- " << get_current_time() << " " << message << std::endl;

    }
    //adiciona a mensagem para a variável message
    if (argc >= 3 && operation == "add")
    {
        //Verifica se uma data já foi adicionada, caso não tenha sido adiciona
        while (!fileRead.eof())
        {
            std::getline(fileRead, message);
            if (message == today)
            {
                dateExist = true;
                continue;
            }
            
        }
        if (!dateExist)
        {
            fileWrite << today << std::endl;
        }
        //adiciona o texto já formatado
        message += argv[2];
        fileWrite <<"- " << get_current_time() << " " << message << std::endl;
    }
    //lê a mensagem
    if (argc == 2 && operation == "list"){
        while (!fileRead.eof())
        {
            std::getline(fileRead, message);
            if (message.size() == 0 || message[0] == '#')
            {
                continue;
            }
            std::cout << message << std::endl;
        }
    }
    //std::cout << "Mensagem: " << message <<std::endl;
    return 0;
}