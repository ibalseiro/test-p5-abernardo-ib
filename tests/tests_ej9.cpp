#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../headers/ej9.h"

TEST_CASE("Triangulo clasificaPorLado y clasificaPorAngulo (test básico)")
{
    Triangulo t;
    t.vertices[0] = {0, 0};
    t.vertices[1] = {1, 0};
    t.vertices[2] = {0.5, sqrt(3) / 2};
    CHECK(t.clasificaPorLado() == Triangulo::EQUILATERO);
    // El ángulo se puede testear con casos ideales cuando esté implementado
}