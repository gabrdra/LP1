#ifndef CLIENT
#define CLIENT

#include <string>
class client
{
private:
    std::string name;
    int cpf;
public:
    std::string getName();
    void setName(std::string name);
    int getCpf();
    void setCpf(int cpf);
};


#endif