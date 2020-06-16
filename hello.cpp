#include <iostream>
int main(){
    int n1 = 0;
    int n2 = 0;
    std::cout << "Informe o primeiro número: ";
    std::cin >> n1;
    std::cout << "Informe o segundo número: ";
    std::cin >> n2;

    int sum = n1+n2;
    std::cout << "Resultado da soma é: " << sum << std::endl;
    return 0;
}