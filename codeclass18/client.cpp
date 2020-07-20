#include "client.hpp"

std::string client::getName()
{
    return this->name;
}
void client::setName(std::string name)
{
    this->name = name;
}