#include <iostream>
#include "numeroprimo.h"
using namespace std;
int numeroprimo (int n) {
    int i=1, x;
    if (n>1) {
        do {
            i++;
            x = n%i;
        }
        while (x!=0);
        if (n == i) {
            return true;
        }
        else {
            return false;
        }
    }
}
