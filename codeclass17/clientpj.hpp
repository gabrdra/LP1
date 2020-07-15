#ifndef CLIENTPJ
#define CLIENTPJ

#include <string>
class clientpj
{
private:
    std::string companyName;
    int cnpj;
public:
    std::string getCompanyName();
    void setCompanyName(std::string companyName);
    int getCnpj();
    void setCnpj(int cnpj);
};


#endif