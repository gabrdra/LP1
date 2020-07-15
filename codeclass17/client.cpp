#include "client.hpp"

std::string client::getName()
{
    return this->name;
}
void client::setName(std::string name)
{
    this->name = name;
}
int client::getCpf()
{
    return this->cpf;
}
void client::setCpf(int cpf)
{
    this->cpf = cpf;
}