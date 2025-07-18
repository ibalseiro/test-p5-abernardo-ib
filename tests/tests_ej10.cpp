#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../headers/ej10.h"

TEST_CASE("AlMenosUnaCoincidencia")
{
    float prob = AlMenosUnaCoincidencia(23);
    CHECK(prob > 0.45); // Probabilidad real es ≈ 0.507
    CHECK(prob < 0.6);
}