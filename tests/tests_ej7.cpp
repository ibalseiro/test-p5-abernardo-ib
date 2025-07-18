#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../headers/ej7.h"

TEST_CASE("InvierteArrayNativo invierte correctamente")
{
    int arr[5] = {1, 2, 3, 4, 5};
    InvierteArrayNativo(arr, 5);
    CHECK(arr[0] == 5);
    CHECK(arr[1] == 4);
    CHECK(arr[2] == 3);
    CHECK(arr[3] == 2);
    CHECK(arr[4] == 1);
}