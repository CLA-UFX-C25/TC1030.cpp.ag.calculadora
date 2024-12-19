#include "calculadora.hpp"
#include <iostream>

int main()
{
    double op1, op2;

    std::cout << "Operando 1: ";
    std::cin >> op1;

    std::cout << "Operando 2: ";
    std::cin >> op2;

    Calculadora calc(op1, op2);

    std::cout << "La suma es: " << calc.suma() << "\n";
    std::cout << "La resta es: " << calc.resta() << "\n";
    std::cout << "La multiplicación es: " << calc.multiplica() << "\n";
    std::cout << "La división es: " << calc.divide() << "\n";

    return 0;
}