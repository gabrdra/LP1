#include "company.hpp"

#include <string>


std::string Company::getName()
{
    return this->name;
}
void Company::setName(std::string name)
{
    this->name = name;
}
size_t Company::getCnpj()
{
    return this->cnpj;
}
void Company::setCnpj(size_t cnpj)
{
    this->cnpj = cnpj;
}
