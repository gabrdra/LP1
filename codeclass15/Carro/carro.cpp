#include "carro.hpp"

int Carro::quantidadeCarros;

Carro::Carro(string cor){
    this->cor = cor;
}

Carro::Carro(){
    this->cor = "Branco";
    this->quantidadeCarros += 1;
}

void Carro::acelera(int velocidade){
    this->velocidade += velocidade;
}

void Carro::freia(int velocidade){
    this->velocidade -= velocidade;
}

void Carro::ligaCarro(){
    motor.partida();
}