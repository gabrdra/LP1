#ifndef ACCOUNT
#define ACCOUNT

#include <string>

class account
{
public:
    int number = 0;
    std::string holder = "";
    float balance = 0;

    void withdraw(float moneyAmount);
    void deposit(float moneyAmount);
    void transfer(float moneyAmount, account &recipient);
};
#endif
