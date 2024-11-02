#include "condicionales.h"
#include <iostream>

void Condicionales() {
    int a;
    std::cout << "Ingresa un numero entero: ";
    std::cin >> a;
    if (a > 0) {
        std::cout << "El numero es positivo" << std::endl;
        if (a % 2 == 0) {
            std::cout << "El numero es par." << std::endl;
        } else {
            std::cout << "El numero es impar." << std::endl;
        }
    } else if (a < 0) {
        std::cout << "El numero es negativo" << std::endl;
    } else {
        std::cout << "El numero es cero" << std::endl;
    }
}