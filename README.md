# Práctica 5

### ICOM 2025

Se proveen una serie de archivos tipo headers (`.h`) y de implementación (`.cpp`) que contienen las definiciones de las funciones que se deben implementar en esta práctica, ademas de tests automáticos para verificar su funcionamiento. El objetivo de esta práctica es que se familiarice con el uso de funciones, arreglos nativos, `std::array` y `std::vector`, así como también con la implementación de pruebas unitarias.

## Instrucciones

- Cada ejercicio debe ser implementado en un archivo `.cpp` separado, siguiendo el nombre del ejercicio (ej. `ej1.cpp`, `ej2.cpp`, etc.).
- Los archivos de implementación deben incluir el header correspondiente al ejercicio. (`headers/ej1.h`, `headers/ej2.h`, etc.).
- Los tests se encuentran en la carpeta `tests` y deben ser ejecutados para verificar el correcto funcionamiento de las funciones implementadas.
- Para compilar y ejecutar los tests, se puede utilizar el siguiente comando en la terminal:
```
 ./tests.sh <numero de ejercicio>
```   

## Ejercicio 1

Implemente un programa que con funciones que a partir del uso de la función `rand()` obtenga un histograma con N intervalos de clase, en donde cada intervalo contenga la cantidad de veces que la función `rand()` dio un elemento en él (en el primer intervalo contendrá la cantidad de elementos con valores entre 0 y `RAND_MAX`/N - 1, el segundo la cantidad de elementos con valores entre `RAND_MAX`/N y 2 * `RAND_MAX`/N - 1, etc.) Implemente tres funciones, utilizando arreglos nativos, `std::array` y `std::vector`. ¿Nota alguna diferencia en la forma de uso?

```cpp
void HistogramaNativo(int N);
void HistogramaArray(int N);
void HistogramaVector(int N);
```


## Ejercicio 2
Implementar una función que reciba un arreglo nativo unidimensional y su dimensión y lo imprima. Prototipo: 

```cpp
void ImprimeVector(double Vector[], int NumElementos);
```

## Ejercicio 3

1. Implementar una función como la anterior para ingresar los elementos del vector.
```cpp
void IngresaVector(double Vector[], int NumElementos);
```


2. Si ahora en lugar de utilizar arreglos nativos utiliza std::array o std::vector, ¿Qué comportamiento observa en la variable originalmente pasada a esta función?

```cpp
void IngresaVectorArray(std::array<double, N>& Vector);
void IngresaVectorVector(std::vector<double>& Vector);
```

## Ejercicio 4
Implementar una función que reciba un array nativo de enteros y su dimensión y los ordene en sentido creciente utilizando algún algoritmo como los que vimos a principio del curso.

```cpp
void OrdenaArrayNativo(int V[], int n);
```

## Ejercicio 5 <--- TBD
Copie las definiciones de las funciones de los ejercicios 2, 3 y 4 en un archivo separado llamado misfuncs.cpp. Escriba un programa, ej5.cpp, que utilice todas esas funciones y compílelo con:
```
g++ misfuncs.cpp ej5.cpp -o miprog
```
Este ejercicio no tiene tests.

## Ejercicio 6 <--- TBD
Correr repetidas veces el programa realizado en el problema 5 para distintos tamaños del vector (con las componentes inicializas a través de la función rand) e ir haciendo manualmente una tabla (tamaño, tiempo) para encontrar alguna correlación entre estas dos variables. Analizar el algoritmo utilizado para corroborarlo. Realice la misma tabla para ordenar un std::array utilizando la función std::sort. ¿A que conclusión llega? (Note que en este ejercicio los tests son manuales, no se pide automatizarlo).

## Ejercicio 7
Implementar una función que reciba un array nativo de enteros y su dimensión e invierta a todos sus elementos (El primer elemento pasa a ser el último, el segundo pasa a penúltimo, etc.)
```cpp
 void InvierteArrayNativo(int V[], int n);
```
## Ejercicio 8
Implemente las siguientes funciones que calculan el promedio y la desviación estándar de un conjunto de ‘n’ valores:
```cpp
double Promedio(double datos[], int n);
double DesviacionStandard(double datos[], int n);
```

## Ejercicio 9
Escriba un programa que utilizando la siguiente estructura para representar puntos en 2D:
```cpp
struct Punto2D {
    double x;
    double y;
};

struct Triangulo {
    enum ClaseLado { EQUILATERO, ISOCELES, ESCALENO };
    enum ClaseAngulo { ACUTANGULO, RECTANGULO, OBTUSANGULO };
    Punto2D vertices[3];
    ClaseLado clasificaPorLado();
    ClaseAngulo clasificaPorAngulo();
};
```
1. Implemente los métodos `clasificaPorLado()` y `clasificaPorAngulo()`.
2. Realice un programa que pida al usuario los puntos correspondientes a los 3 vértices de
un triángulo y pruebe los métodos anteriores.

## Ejercicio 10

El problema de cumpleaños está relacionado con cuál es la probabilidad de que en un grupo de personas haya al menos dos que cumplan años el mismo día. Se sabe que si en una misma sala hay 23 personas reunidas, la probabilidad es del 50,7%. Para 57 o más personas la probabilidad es mayor del 99%. Si bien esto se puede deducir de manera analítica, es posible hacer una comprobación empírica. Para eso, considere 1000 grupos de un tamaño fijo de personas, tomando sus fechas de nacimiento al azar y analice en cuántos casos al menos dos personas cumplen el mismo día. Los tamaños de los grupos deben tomarse entre 10 y 60, aumentando de a 10. Hacer una tabla que indique la probabilidad en función del tamaño de grupo. Válgase de funciones para descomponer el problema en sub-problemas. La función que se busca testear es:
```cpp
float AlMenosUnaCoincidencia(int n);
```

## Ejercicio 11 (progresivo)

En el archivo ej11.cpp encontrara el esqueleto de un programa que debe solicitar que se ingresen 2 caracteres por teclado, para luego compararlos. Complete lo marcado con TODO para que el programa funcione correctamente. 
