#include "arrays.h"
#include <iostream>

void Arrays() {
    int arr[5] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] * 3 << " ";
    }
    std::cout << std::endl;
}