#include "lib.h"
#include <iostream>

using namespace std;

int main()
{
    float n,risultato;
    cin >> n;
    int vettore[n];
    
    inizializza(vettore,n);
    risultato = compara(vettore, n);
    
    cout << risultato << endl;

    return 0;
}
