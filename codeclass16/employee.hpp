#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>
#include "company.hpp"

class Employee
{
private:
    std::string name;
    std::string departament;
    float salary;
    Company company;
    std::string admissionDate;

public:
    Employee(std::string name, std::string departament, float salary, Company company, std::string admissionDate);
    std::string getName();
    void setName(std::string name);
    std::string getDepartament();
    void setDepartament(std::string departament);
    float getSalary();
    void setSalary(float salary);
    Company getCompany();
    std::string getAdmissionDate();
    void setAdmissionDate(std::string admissionDate);
};

#endif