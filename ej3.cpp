#include "headers/ej3.h"
#include <iostream>
#include <array>
#include <vector>

void IngresaVector(double Vector[], int NumElementos)
{
    for (int i = 0; i < NumElementos; ++i)
    {
        std::cin >> Vector[i];
    }
}

template <std::size_t N>
void IngresaVectorArray(std::array<double, N> &Vector)
{
    for (std::size_t i = 0; i < N; ++i)
    {
        std::cin >> Vector[i];
    }
}

// Instanciar explícitamente para el linker
template void IngresaVectorArray(std::array<double, 3> &);

void IngresaVectorVector(std::vector<double> &Vector)
{
    for (std::size_t i = 0; i < Vector.size(); ++i)
    {
        std::cin >> Vector[i];
    }
}