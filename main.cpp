#include "lib.h"
#include <iostream>

using namespace std;

int main()
{
    int n;
    float risultato;
    cin >> n;
    float vettore[n];
    
    inizializza(vettore,n);
    risultato = compara(vettore, n);
    
    cout << risultato << endl;

    return 0;
}
