#include <iostream>
#include "numeroprimo.h"
using namespace std;
bool numeroprimo (int n) {
    int i=1, x;
    if (n>1) {
        do {
            i++;
            x = n%i;
        }
        while (x!=0);
        if (n == i) {
            return 0;
        }
        else {
            return 1;
        }
    }
    else {
        return 1;
    }
}
