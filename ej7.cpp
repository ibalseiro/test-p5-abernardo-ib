#include "headers/ej7.h"

void InvierteArrayNativo(int V[], int n)
{
    for (int i = 0; i < n / 2; ++i)
    {
        int temp = V[i];
        V[i] = V[n - i - 1];
        V[n - i - 1] = temp;
    }
}