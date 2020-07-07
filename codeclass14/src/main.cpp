#include <iostream>
#include "conta.hpp"

using namespace std;

int main(){
    Conta c;

    c.titular.nome = "José";
    c.titular.cpf = "000.000.000-00";
    c.agencia.nome = "Santander";
    cout << "Nome do titular da conta: " << c.titular.nome << endl;
    cout << "Nome da Agência: " << c.agencia.nome << endl;
}