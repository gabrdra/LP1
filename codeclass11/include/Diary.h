#ifndef W5N_DIARY_H
#define W5N_DIARY_H

#include "Message.h"
#include <string>
#include <vector>
struct Diary
{
    Diary(const std::string& filename);
    ~Diary();

    std::string filename;
    std::vector<Message> messages;
    size_t messages_size;
    size_t messages_capacity;


    void add(const std::string& message);
    void add(Message& message);
    std::vector<Message*> search(std::string what);
    void load_messages();
    //void resize_messages();
    void write();
};
#endif
