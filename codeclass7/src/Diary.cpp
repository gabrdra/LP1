#include "Diary.h"

Diary::Diary(const std::string& filename)
{
}

void Diary::add(const std::string& message)
{
    for (messages_size = 0; messages_size < messages_capacity; messages_size++)
    {
        messages[messages_size].content = "Hello" + std::string(messages_size, 'o');
    }
    for (size_t i = 0; i < messages_capacity; i++)
    {
        std::cout << messages[i].content << std::endl;
    }
        
    
}

void Diary::write()
{
    // gravar as mensagens no disco
}
