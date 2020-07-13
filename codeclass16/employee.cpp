#include "company.hpp"
#include "employee.hpp"


Employee::Employee(std::string name, std::string departament, float salary, Company company, std::string admissionDate)
{
    this->name = name;
    this->departament = departament;
    this->salary = salary;
    this->company = company;
    //this->company.setName(companyName);
    //this->company.setCnpj(cnpj);
    this ->admissionDate = admissionDate;

}

std::string Employee::getName()
{
    return this->name;
}
void Employee::setName(std::string name)
{
    this->name = name;
}
std::string Employee::getDepartament()
{
    return this->departament;
}

void Employee::setDepartament(std::string departament)
{
    this->departament = departament;
}
float Employee::getSalary()
{
    return this->salary;
}

void Employee::setSalary(float salary)
{
    this->salary = salary;
}
Company Employee::getCompany()
{
    return this->company;
}
std::string Employee::getAdmissionDate()
{
    return this->admissionDate;
}

void Employee::setAdmissionDate(std::string admissionDate)
{
    this ->admissionDate = admissionDate;
}