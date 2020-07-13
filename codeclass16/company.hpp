#ifndef COMPANY
#define COMPANY

#include <string>

class Company
{
private:
    std::string name;
    size_t cnpj;
public:
    std::string getName();
    void setName(std::string name);
    size_t getCnpj();
    void setCnpj(size_t cnpj);
};
#endif