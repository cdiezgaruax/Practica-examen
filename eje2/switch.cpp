#include "switch.h"
#include <iostream>

void semana() {
    int dia;
    std::cout << "Ingrese un numero del 1 al 7: ";
    std::cin >> dia;
    switch (dia) {
        case 1: std::cout << "Lunes" << std::endl; break;
        case 2: std::cout << "Martes" << std::endl; break;
        case 3: std::cout << "Miercoles" << std::endl; break;
        case 4: std::cout << "Jueves" << std::endl; break;
        case 5: std::cout << "Viernes" << std::endl; break;
        case 6: std::cout << "Sabado" << std::endl; break;
        case 7: std::cout << "Domingo" << std::endl; break;
        default: std::cout << "Numero invalido" << std::endl; break;
    }
}