#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../headers/ej4.h"

TEST_CASE("OrdenaArrayNativo ordena correctamente")
{
    int arr[5] = {4, 2, 5, 1, 3};
    OrdenaArrayNativo(arr, 5);
    CHECK(arr[0] == 1);
    CHECK(arr[1] == 2);
    CHECK(arr[2] == 3);
    CHECK(arr[3] == 4);
    CHECK(arr[4] == 5);
}