#include "account.h"

void account::withdraw(float moneyAmount)
{
    this->balance -= moneyAmount;
}
void account::deposit(float moneyAmount)
{
    this->balance += moneyAmount;
}
void account::transfer(float moneyAmount, account &recipient)
{
    withdraw(moneyAmount);
    recipient.deposit(moneyAmount);
}