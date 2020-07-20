#include "clientpf.hpp"
#include "client.hpp"
#include "clientpj.hpp"
#include "myqueue.hpp"
#include "employee.hpp"
#include "teller.hpp"
#include "security.hpp"
#include "manager.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    myqueue<clientpj> clientpjQueue(3);
    myqueue<clientpf> clientQueue(4);
    if (clientpjQueue.isEmpty())
    {
        std::cout << "clientpjQueue is empty" << std::endl;
    }
    if (clientQueue.isEmpty())
    {
        std::cout << "clientQueue is empty" << std::endl;
    }
    clientpj temppj;
    temppj.setName("AAAAAA");
    temppj.setCnpj(12345);
    clientpjQueue.push(temppj);
    for (size_t i = 0; i < 4; i++)
    {
        clientpf tempClient;
        tempClient.setName("BBBB");
        tempClient.setCpf(67890);
        clientQueue.push(tempClient);
    }
    std::cout << clientpjQueue.back().getName() << std::endl;
    //std::cout << clientpjQueue.front().getCnpj() << std::endl;
    for (size_t i = 0; i < clientQueue.sizeOf(); i++)
    {
        std::cout << clientQueue.back().getCpf() << std::endl;
        clientQueue.pop();
    }
    teller t("teller", 1);
    std::cout << t.getName() << " " << t.getTellerCode() << std::endl;
    security s("security", 1);
    std::cout << s.getName() << " " << s.getSecurityCode() << std::endl;
    manager m("manager", 1);
    std::cout << m.getName() << " " << m.getManagerCode() << std::endl;
    return 0;
}
