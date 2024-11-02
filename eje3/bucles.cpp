#include "bucles.h"
#include <iostream>

void sumapar () {
    int suma = 0;
    for (int i = 1; i <= 50; ++i) {
        if (i % 2 == 0) {
            suma += i;
        }
    }
    std::cout << "La suma de los numeros pares entre 1 y 50 es: " << suma << std::endl;
}

void sumaimpar () {
    int suma = 0, i = 1;
    while (i <= 50) {
        if (i % 2 != 0) {
            suma += i;
        }
        ++i;
    }
    std::cout << "La suma de los numeros impares entre 1 y 50 es: " << suma << std::endl;
}