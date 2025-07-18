#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../headers/ej8.h"

TEST_CASE("Promedio y DesviacionStandard")
{
    double datos[4] = {1.0, 2.0, 3.0, 4.0};
    CHECK(Promedio(datos, 4) == doctest::Approx(2.5));
    CHECK(DesviacionStandard(datos, 4) == doctest::Approx(1.1180).epsilon(0.001));
}