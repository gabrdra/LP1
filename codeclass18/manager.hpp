#ifndef MANAGER
#define MANAGER
#include "employee.hpp"
#include <string>
class manager : public employee
{
private:
    int managerCode;
public:
    manager(std::string name, int code);
    int getManagerCode();
    void setManagerCode(int code);
};

manager::manager(std::string name, int code) : employee(name)
{
    this->managerCode = code;
}
int manager::getManagerCode()
{
    return this->managerCode;
}
void manager::setManagerCode(int code)
{
    this->managerCode = code;
}
#endif