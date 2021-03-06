#ifndef W5N_DIARY_H
#define W5N_DIARY_H

#include "Message.h"

#include <string>
#include <iostream> //usado somente para teste da função add
struct Diary
{
    Diary(const std::string& filename);

    std::string filename;
    Message* messages;
    size_t messages_capacity;
    size_t messages_size;
    

    void add(const std::string& message);
    void write();
};
#endif
