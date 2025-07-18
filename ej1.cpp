#include "headers/ej1.h"
#include <iostream>
#include <array>
#include <vector>
#include <cstdlib>

const int MUESTRAS = 10000;

void HistogramaNativo(int N)
{
    int *frecuencias = new int[N]();
    for (int i = 0; i < MUESTRAS; ++i)
    {
        int idx = rand() % N;
        frecuencias[idx]++;
    }
    for (int i = 0; i < N; ++i)
        std::cout << frecuencias[i] << std::endl;
    delete[] frecuencias;
}

void HistogramaArray(int N)
{
    std::array<int, 100> frecuencias = {};
    for (int i = 0; i < MUESTRAS; ++i)
    {
        int idx = rand() % N;
        frecuencias[idx]++;
    }
    for (int i = 0; i < N; ++i)
        std::cout << frecuencias[i] << std::endl;
}

void HistogramaVector(int N)
{
    std::vector<int> frecuencias(N, 0);
    for (int i = 0; i < MUESTRAS; ++i)
    {
        int idx = rand() % N;
        frecuencias[idx]++;
    }
    for (int i = 0; i < N; ++i)
        std::cout << frecuencias[i] << std::endl;
}