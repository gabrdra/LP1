#ifndef TELLER
#define TELLER
#include "employee.hpp"
#include <string>
class teller : public employee
{
private:
    int tellerCode;
public:
    teller(std::string name, int code);
    int getTellerCode();
    void setTellerCode(int code);
};

teller::teller(std::string name, int code) : employee(name)
{
    this->tellerCode = code;
}
int teller::getTellerCode()
{
    return this->tellerCode;
}
void teller::setTellerCode(int code)
{
    this->tellerCode = code;
}
#endif