#include "Diary.h"
#include "Moment.h"
#include <fstream>
#include <iostream>
Diary::Diary(const std::string& name) : filename(name), messages(nullptr), messages_size(0), messages_capacity(10)
{
    messages = new Message[messages_capacity];
    load_messages();
}

Diary::~Diary()
{
    write();
    delete[] messages;
}

void Diary::add(const std::string& message)
{
    if (messages_size >= messages_capacity) {
        resize_messages();
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

void Diary::add(Message& message)
{
    if (messages_size >= messages_capacity) {
        resize_messages();
    }
    messages[messages_size] = message;
    messages_size++;
}

void Diary::load_messages()
{
    std::ifstream file_read(filename);
    std::string current_line;
    std::string current_date;
    Message m;
    int i = 0;
    while (!file_read.eof())
    {
        std::getline(file_read, current_line);
        if (current_line.size() == 0)
        {
            break;
        }
        if (current_line[0] == '#')
        {
            current_date = current_line.substr(2);
            getline(file_read, current_line);
        }
        m.date.set_from_string(current_date);
        m.time.set_from_string(current_line.substr(2, 8));
        m.content = current_line.substr(11);
        add(m);
    }
    file_read.close();
}

void Diary::resize_messages()
{
    messages_capacity *= 2;
    Message* new_messages = new Message[messages_capacity];
    for (size_t i = 0; i < messages_size; i++)
    {
        new_messages[i] = messages[i];
    }
    delete[] messages;
    messages = new_messages;
}

void Diary::write()
{
    std::ofstream file_write(filename);
    for (size_t i = 0; i < messages_size; i++)
    {
        if (i == 0 || (messages[i-1].date.day != messages[i].date.day) || (messages[i-1].date.month != messages[i].date.month) || (messages[i-1].date.year != messages[i].date.year))
        {
            file_write << "# " << messages[i].date.to_string() << std::endl;
        }
        file_write <<"- " << messages[i].time.to_string() << " " << messages[i].content << std::endl;
    }
    file_write.close();
}
