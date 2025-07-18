#include "headers/ej8.h"
#include <cmath>

double Promedio(double datos[], int n)
{
    double suma = 0.0;
    for (int i = 0; i < n; ++i)
        suma += datos[i];
    return suma / n;
}

double DesviacionStandard(double datos[], int n)
{
    double prom = Promedio(datos, n);
    double suma = 0.0;
    for (int i = 0; i < n; ++i)
        suma += (datos[i] - prom) * (datos[i] - prom);
    return std::sqrt(suma / n);
}