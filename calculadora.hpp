#pragma once

class Calculadora {
private:
    double operand1;
    double operand2;

public:
    Calculadora(double, double);

    double suma();
    double resta();
    double multiplica();
    double divide();
};