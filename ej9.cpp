#include "headers/ej9.h"
#include <cmath>
#include <algorithm>

static double distancia(const Punto2D &a, const Punto2D &b)
{
    return std::sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

// Asume lados iguales si difieren menos de 1e-6
Triangulo::ClaseLado Triangulo::clasificaPorLado()
{
    double l1 = distancia(vertices[0], vertices[1]);
    double l2 = distancia(vertices[1], vertices[2]);
    double l3 = distancia(vertices[2], vertices[0]);
    if (std::abs(l1 - l2) < 1e-6 && std::abs(l2 - l3) < 1e-6)
        return EQUILATERO;
    if (std::abs(l1 - l2) < 1e-6 || std::abs(l2 - l3) < 1e-6 || std::abs(l3 - l1) < 1e-6)
        return ISOCELES;
    return ESCALENO;
}

Triangulo::ClaseAngulo Triangulo::clasificaPorAngulo()
{
    double l1 = distancia(vertices[0], vertices[1]);
    double l2 = distancia(vertices[1], vertices[2]);
    double l3 = distancia(vertices[2], vertices[0]);
    // Ley de cosenos para ángulos
    double a2 = l1 * l1, b2 = l2 * l2, c2 = l3 * l3;
    double ang1 = std::acos((b2 + c2 - a2) / (2 * l2 * l3));
    double ang2 = std::acos((a2 + c2 - b2) / (2 * l1 * l3));
    double ang3 = std::acos((a2 + b2 - c2) / (2 * l1 * l2));

    double maxAng = std::max({ang1, ang2, ang3});
    const double rad90 = M_PI / 2.0;
    if (std::abs(maxAng - rad90) < 1e-6)
        return RECTANGULO;
    if (maxAng > rad90)
        return OBTUSANGULO;
    return ACUTANGULO;
}