#include "lib.h"
#include <iostream>
using namespace std;
void inizializza(float vettore[], float n){
    for (int i = 0; i < n; i++) {
        vettore[i] = 0;
        
    }
}

int compara(float vettore[], float n) {
    int temp = 0;
    for (int i = 0; i < n; i++) {
        cin >> vettore[i];
        if (vettore[i] > temp) {
            temp = vettore[i];
        }
    }
    return temp;
}
