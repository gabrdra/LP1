#include <string>
#include "motor.hpp"

using namespace std;

class Carro{
    public:
    string tipo;
    string placa;
    int numPortas;
    int velocidade;
    static int quantidadeCarros;
    string cor;
    Motor motor;

    Carro(string cor);
    Carro();

    void acelera(int velocidade);
    void freia(int velocidade);
    void ligaCarro();
};