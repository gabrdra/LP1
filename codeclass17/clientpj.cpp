#include "clientpj.hpp"

std::string clientpj::getCompanyName()
{
    return this->companyName;
}
void clientpj::setCompanyName(std::string companyName)
{
    this->companyName = companyName;
}
int clientpj::getCnpj()
{
    return this->cnpj;
}
void clientpj::setCnpj(int cnpj)
{
    this->cnpj = cnpj;
}