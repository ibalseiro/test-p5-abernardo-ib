#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../headers/ej3.h"
#include <sstream>
#include <iostream>
#include <array>
#include <vector>

TEST_CASE("IngresaVector carga correctamente los elementos")
{
    double v[3];
    std::istringstream input("4.5 5.5 6.5\n");
    std::streambuf *old_cin = std::cin.rdbuf(input.rdbuf());

    IngresaVector(v, 3);

    std::cin.rdbuf(old_cin);

    CHECK(v[0] == doctest::Approx(4.5));
    CHECK(v[1] == doctest::Approx(5.5));
    CHECK(v[2] == doctest::Approx(6.5));
}

TEST_CASE("IngresaVectorArray carga std::array correctamente")
{
    std::array<double, 3> arr;
    std::istringstream input("1.1 2.2 3.3\n");
    std::streambuf *old_cin = std::cin.rdbuf(input.rdbuf());

    IngresaVectorArray(arr);

    std::cin.rdbuf(old_cin);
    CHECK(arr[0] == doctest::Approx(1.1));
    CHECK(arr[1] == doctest::Approx(2.2));
    CHECK(arr[2] == doctest::Approx(3.3));
}

TEST_CASE("IngresaVectorVector carga std::vector correctamente")
{
    std::vector<double> v(3);
    std::istringstream input("9.9 8.8 7.7\n");
    std::streambuf *old_cin = std::cin.rdbuf(input.rdbuf());

    IngresaVectorVector(v);

    std::cin.rdbuf(old_cin);
    CHECK(v[0] == doctest::Approx(9.9));
    CHECK(v[1] == doctest::Approx(8.8));
    CHECK(v[2] == doctest::Approx(7.7));
}