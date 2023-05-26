#include "lib.h"
#include <iostream>

using namespace std;

int main()
{
    int n,risultato;
    cout << "quanti numeri vuoi inserire?"<< endl;
    cin >> n;
    int vettore[n];
    
    inizializza(vettore,n);
    risultato = compara(vettore, n);
    
    cout << risultato << endl;

    return 0;
}
