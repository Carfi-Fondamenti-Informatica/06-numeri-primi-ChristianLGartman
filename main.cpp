#include<iostream>
#include "numeroprimo.h"
int main() {
    int h;
    std::cout << "dimmi un numero" << std::endl;
    std::cin >> h;
    int a = numeroprimo(h);
    if (a == true) {
        std::cout << "numero primo" << std::endl;
    }
    if (a == false) {
        std::cout << "numero non primo" << std::endl;
    }
}
