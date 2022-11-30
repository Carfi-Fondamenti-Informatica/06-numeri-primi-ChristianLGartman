#include "lib.h"
int numeroprimo (int n) {
    int i=1, x=0;
    if (n>1) {
        do {
            i++;
            x = n%i;
        }
        while (x!=0);
        if (n == i) {
            w = true;
        }
        else {
            w = false;
        }
    }
}
