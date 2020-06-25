#include "Diary.h"
#include "Moment.h"
//#include <iostream>
Diary::Diary(const std::string& name) : filename(name), messages(nullptr), messages_size(0), messages_capacity(10)
{
    messages = new Message[messages_capacity];
}

Diary::~Diary()
{
    delete[] messages;
}

void Diary::add(const std::string& message)
{
    if (messages_size >= messages_capacity) {
        return;
    }

    Message m;
    m.content = message;
    m.date.set_from_string(get_current_date());
    m.time.set_from_string(get_current_time());
    messages[messages_size] = m;
    //std::cout << messages[messages_size].content << std::endl;
    //std::cout << messages[messages_size].date.day << '/' << messages[messages_size].date.month << '/' << messages[messages_size].date.year << std::endl;
    //std::cout << messages[messages_size].time.hour << ':' << messages[messages_size].time.minute << ':' << messages[messages_size].time.second << std::endl;
    messages_size++;
}

void Diary::write()
{
    // gravar as mensagens no disco
}
