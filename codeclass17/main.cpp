#include "client.hpp"
#include "clientpj.hpp"
#include "myqueue.hpp"

#include <iostream>

int main(int argc, char const *argv[])
{
    myqueue<clientpj> clientpjQueue(3);
    myqueue<client> clientQueue(4);
    if (clientpjQueue.isEmpty())
    {
        std::cout << "clientpjQueue is empty" << std::endl;
    }
    if (clientQueue.isEmpty())
    {
        std::cout << "clientQueue is empty" << std::endl;
    }
    clientpj temppj;
    temppj.setCompanyName("AAAAAA");
    temppj.setCnpj(12345);
    clientpjQueue.push(temppj);
    for (size_t i = 0; i < 4; i++)
    {
        client tempClient;
        tempClient.setName("BBBB");
        tempClient.setCpf(67890);
        clientQueue.push(tempClient);
    }
    std::cout << clientpjQueue.back().getCompanyName() << std::endl;
    //std::cout << clientpjQueue.front().getCnpj() << std::endl;
    for (size_t i = 0; i < clientQueue.sizeOf(); i++)
    {
        std::cout << clientQueue.back().getCpf() << std::endl;
        clientQueue.pop();
    }
    
    return 0;
}
