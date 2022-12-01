#include<iostream>
#include "numeroprimo.h"
int main() {
    int h;
    std::cin >> h;
    if (numeroprimo(h) == 0) {
        std::cout << "numero primo" << std::endl;
    }
    if (numeroprimo(h) == 1) {
        std::cout << "numero non primo" << std::endl;
    }
}
