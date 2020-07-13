#include <iostream>
#include <string>
#include "company.hpp"
#include "employee.hpp"
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    size_t employeeAmount;
    cout << "How many employees: ";
    cin >> employeeAmount;
    vector<Employee> employees;
    Company a;
    a.setName("aaaaaaa");
    a.setCnpj(1234);
    for (size_t i = 0; i < employeeAmount; i++)
    {
        Employee tempEmployee("Joao", "TI", 10000.00, a, "13/07/2020");
        cout << tempEmployee.getSalary() << endl;
        employees.push_back(tempEmployee);
    }
    for(auto& e : employees)
    {
        cout << e.getName() << " " << e.getSalary() << endl;
        if (e.getDepartament() == "TI")
        {
            e.setSalary(e.getSalary()*1.1);
        }
        
    }
    for(auto e : employees)
    {
        cout << e.getName() << " " << e.getSalary() << endl;
    }
    return 0;
}
