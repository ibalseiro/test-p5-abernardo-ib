#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../headers/ej1.h"
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

const int MUESTRAS = 10000;

// Auxiliar: parsea frecuencias por línea en un vector
std::vector<int> frecuencias(const std::string &out)
{
    std::istringstream iss(out);
    std::vector<int> frec;
    int n;
    while (iss >> n)
        frec.push_back(n);
    return frec;
}

bool es_uniforme(const std::vector<int> &frec, double tolerancia = 0.10)
{
    double prom = 0;
    for (int x : frec)
        prom += x;
    prom /= frec.size();
    for (int x : frec)
    {
        if (std::abs(x - prom) > tolerancia * prom)
            return false;
    }
    return true;
}

TEST_CASE("HistogramaNativo es uniforme")
{
    int N = 8;
    std::streambuf *old_buf = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());
    HistogramaNativo(N);
    std::cout.rdbuf(old_buf);

    auto frec = frecuencias(buffer.str());
    CHECK(frec.size() == N);
    int total = 0;
    for (int x : frec)
        total += x;
    CHECK(std::abs(total - MUESTRAS) <= N);
    CHECK(es_uniforme(frec));
}

TEST_CASE("HistogramaArray es uniforme")
{
    int N = 8;
    std::streambuf *old_buf = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());
    HistogramaArray(N);
    std::cout.rdbuf(old_buf);

    auto frec = frecuencias(buffer.str());
    CHECK(frec.size() == N);
    int total = 0;
    for (int x : frec)
        total += x;
    CHECK(std::abs(total - MUESTRAS) <= N);
    CHECK(es_uniforme(frec));
}

TEST_CASE("HistogramaVector es uniforme")
{
    int N = 8;
    std::streambuf *old_buf = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());
    HistogramaVector(N);
    std::cout.rdbuf(old_buf);

    auto frec = frecuencias(buffer.str());
    CHECK(frec.size() == N);
    int total = 0;
    for (int x : frec)
        total += x;
    CHECK(std::abs(total - MUESTRAS) <= N);
    CHECK(es_uniforme(frec));
}