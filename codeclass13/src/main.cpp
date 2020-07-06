#include "account.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    account user1;
    account user2;
    user1.holder = "João";
    user1.number = 1;
    cout << user1.balance << endl;
    user1.deposit(10000.50);
    cout << user1.balance << endl;
    user2.holder = "Gabriel";
    user2.number = 2;
    user2.deposit(4500.80);
    cout << user2.balance << endl;
    user1.withdraw(1500);
    cout << user1.balance << endl;
    user1.transfer(3000, user2);
    cout << user1.balance << endl;
    cout << user2.balance << endl;
    return 0;
}

