#define CATCH_CONFIG_MAIN // defines main() automatically
#include <catch2/catch.hpp>

#include "../calculadora.hpp"

// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Ex1", "[Suma]")
{
    Calculadora calc(1, 1);
    REQUIRE(calc.suma() == 2);
}

// =====================
// tests for exercise 2
// ---------------------

TEST_CASE("Ex2", "[resta]")
{
    Calculadora calc(5, 3);
    REQUIRE(calc.resta() == 2);
}

// =====================
// tests for exercise 3
// ---------------------

TEST_CASE("Ex3", "[multiplicacion]")
{
    Calculadora calc(5, 3);
    REQUIRE(calc.multiplica() == 15);
}

// =====================
// tests for exercise 4
// ---------------------

TEST_CASE("Ex4", "[division]")
{
    Calculadora calc(12, 3);
    REQUIRE(calc.divide() == 4);
}
