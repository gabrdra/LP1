#ifndef conta
#define conta

#include "cliente.hpp"
#include "agencia.hpp"
class Conta{
    public:
    int numero;
    Cliente titular;
    double saldo;
    Agencia agencia;

    void saca(double valor);
    void deposita(double valor);
    void transfere(double valor, Conta &c);
};

#endif