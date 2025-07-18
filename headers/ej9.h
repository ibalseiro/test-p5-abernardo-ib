#pragma once

struct Punto2D
{
    double x;
    double y;
};

struct Triangulo
{
    enum ClaseLado
    {
        EQUILATERO,
        ISOCELES,
        ESCALENO
    };
    enum ClaseAngulo
    {
        ACUTANGULO,
        RECTANGULO,
        OBTUSANGULO
    };
    Punto2D vertices[3];
    ClaseLado clasificaPorLado();
    ClaseAngulo clasificaPorAngulo();
};