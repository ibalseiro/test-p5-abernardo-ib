#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../headers/ej2.h"

TEST_CASE("ImprimeVector - test manual")
{
    double v[3] = {1.1, 2.2, 3.3};
    std::streambuf *old_cout = std::cout.rdbuf(); // Guardá el buffer original
    std::stringstream ss;
    std::cout.rdbuf(ss.rdbuf()); // Redirigí cout al stringstream

    ImprimeVector(v, 3);

    std::cout.rdbuf(old_cout); // Restaurá cout

    std::string salida = ss.str();

    // Si querés chequear que imprime EXACTAMENTE "1.1 2.2 3.3 \n" hacé:
    CHECK(salida == "1.1 2.2 3.3\n");
}
