#include "lib.h"
#include <iostream>
using namespace std;
void inizializza(float vettore[], int n){
    for (int i = 0; i < n; i++) {
        vettore[i] = 0;
        
    }
}

float compara(float vettore[], int n) {
    float temp = 0;
    for (int i = 0; i < n; i++) {
        cin >> vettore[i];
        if (vettore[i] > temp) {
            temp = vettore[i];
        }
    }
    return temp;
}
