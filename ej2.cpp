#include "headers/ej2.h"
#include <iostream>

void ImprimeVector(double Vector[], int NumElementos)
{
    for (int i = 0; i < NumElementos; ++i)
    {
        std::cout << Vector[i];
        if (i < NumElementos + 1)
            std::cout << " ";
    }
    std::cout << std::endl;
}