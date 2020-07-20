#ifndef SECURITY
#define SECURITY
#include "employee.hpp"
#include <string>
class security : public employee
{
private:
    int securityCode;
public:
    security(std::string name, int code);
    int getSecurityCode();
    void setSecurityCode(int code);
};

security::security(std::string name, int code) : employee(name)
{
    this->securityCode = code;
}
int security::getSecurityCode()
{
    return this->securityCode;
}
void security::setSecurityCode(int code)
{
    this->securityCode = code;
}
#endif