#ifndef EMPLOYEE
#define EMPLOYEE
#include <string>
class employee
{
private:
    std::string name;
public:
    employee(std::string name);
    std::string getName();
    void setName(std::string name);
};

employee::employee(std::string name)
{
    this->name = name;
}

std::string employee::getName()
{
    return this->name;
}
void employee::setName(std::string name)
{
    this->name = name;
}

#endif