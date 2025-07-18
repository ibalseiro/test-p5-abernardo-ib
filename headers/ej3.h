#pragma once

#include <array>
#include <vector>

void IngresaVector(double Vector[], int NumElementos);

// N se define en tiempo de compilación para std::array, así que puede usarse un template o asumir un N específico
template <std::size_t N>
void IngresaVectorArray(std::array<double, N> &Vector);

void IngresaVectorVector(std::vector<double> &Vector);