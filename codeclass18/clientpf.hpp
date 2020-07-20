#ifndef CLIENTPF
#define CLIENTPF
#include "client.hpp"
#include <string>
class clientpf : public client
{
private:
    int cpf;
public:
    int getCpf();
    void setCpf(int cpf);
};


#endif