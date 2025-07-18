#include "headers/ej4.h"

// Ordena el arreglo V de tamaño n usando Bubble Sort
void OrdenaArrayNativo(int V[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (V[j] > V[j + 1])
            {
                int temp = V[j];
                V[j] = V[j + 1];
                V[j + 1] = temp;
            }
        }
    }
}
