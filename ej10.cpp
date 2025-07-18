#include "headers/ej10.h"
#include <cstdlib>

float AlMenosUnaCoincidencia(int n)
{
    const int GRUPOS = 1000;
    int coincidencias = 0;
    for (int g = 0; g < GRUPOS; ++g)
    {
        bool dias[365] = {};
        bool hay = false;
        for (int i = 0; i < n; ++i)
        {
            int d = rand() % 365;
            if (dias[d])
            {
                hay = true;
                break;
            }
            dias[d] = true;
        }
        if (hay)
            coincidencias++;
    }
    return float(coincidencias) / GRUPOS;
}