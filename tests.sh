#!/bin/bash

# tests.sh
# Uso: ./tests.sh <numero_de_ejercicio>
# Ejemplo: ./tests.sh 2

EJ=$1

if [ -z "$EJ" ]; then
  echo "Uso: $0 <numero_de_ejercicio>"
  exit 1
fi

EJ_CPP="ej${EJ}.cpp"
EJ_H="headers/ej${EJ}.h"
TEST_CPP="tests/tests_ej${EJ}.cpp"
DOCTEST_H="tests/doctest.h"
BIN="test_ej${EJ}"

# Chequear archivos requeridos
if [[ ! -f $EJ_CPP ]]; then
  echo "Falta el archivo de implementación: $EJ_CPP"
  exit 2
fi

if [[ ! -f $EJ_H ]]; then
  echo "Falta el archivo header: $EJ_H"
  exit 3
fi

if [[ ! -f $TEST_CPP ]]; then
  echo "Falta el archivo de test: $TEST_CPP"
  exit 4
fi

if [[ ! -f $DOCTEST_H ]]; then
  echo "Falta el framework de test: $DOCTEST_H"
  exit 5
fi

# Compilar
g++ -std=c++17 "$TEST_CPP" "$EJ_CPP" -o "$BIN"
if [ $? -ne 0 ]; then
  echo "Error de compilación."
  exit 6
fi

# Ejecutar
echo "---- Ejecutando tests para ejercicio $EJ ----"
./"$BIN"
if [ $? -ne 0 ]; then
  echo "Los tests fallaron."
    rm "$BIN"
  exit 7
fi

# Limpiar (opcional, descomentá si querés borrar el ejecutable al final)
rm "$BIN"