#include "App.h"

#include <iostream>
#include <string>
#include <vector>
App::App(const std::string& filename) : diary(filename)
{
}

int App::run(int argc, char* argv[])
{
    if (argc == 1) {
        return show_usage();
    }

    std::string action = argv[1];

    if (action == "add") {
        if (argc == 2) {
            add();
        } else {
            add(argv[2]);
        }
    } else if (action == "list") {
        list_messages();
    } else if (action == "search") {
        if (argc == 2) {
            search();
        } else {
            search(argv[2]);
        }
        
    } else {
        return show_usage();
    }

    return 0;
}

void App::add()
{
    std::string message;
    std::cout << "Enter your message:" << std::endl;
    std::getline(std::cin, message);

    add(message);
}

void App::add(const std::string message)
{
    diary.add(message);
    diary.write();
}

void App::list_messages()
{
    for (size_t i = 0; i < diary.messages_size; ++i) {
        const Message& message = diary.messages[i];
        std::cout << "-" << message.content << std::endl;
    }
}

void App::search()
{
    std::string word;
    std::cout << "Enter waht's being search:" << std::endl;
    std::getline(std::cin, word);

    search(word);
}

void App::search(std::string what)
{
    auto found_message = diary.search(what);
    if (found_message.size() == 0)
    {
        std::cout << "No message found with " << what << std::endl;
    }
    else
    {
        for(auto m : found_message){
            std::cout <<"Message found: "<< m->content << std::endl;
        }
    }
    

}

int App::show_usage()
{
    return 1;
}
