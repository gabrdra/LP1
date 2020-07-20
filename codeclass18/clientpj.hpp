#ifndef CLIENTPJ
#define CLIENTPJ
#include "client.hpp"
#include <string>
class clientpj : public client
{
private:
    int cnpj;
public:
    int getCnpj();
    void setCnpj(int cnpj);
};


#endif