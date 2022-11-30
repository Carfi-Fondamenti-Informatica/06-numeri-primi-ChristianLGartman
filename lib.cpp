#include<iostream>
#include "lib.h"
char w;
using namespace std;
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
            cout << "vero" << endl;
        }
        else {
            w = false;
            cout << "false" << endl;
        }
    }
}
