#include<iostream>
#include "numeroprimo.h"
int main() {
    int h;
    std::cout << "dimmi un numero" << std::endl;
    std::cin >> h;
    if (numeroprimo(h) == true) {
        std::cout << "numero primo" << std::endl;
    }
    if (numeroprimo(h) == false) {
        std::cout << "numero non primo" << std::endl;
    }
}
