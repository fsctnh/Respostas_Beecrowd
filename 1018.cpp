#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int entrada, cem, cinq, vint, dez, cinc, dois, resto;
    cin >> entrada;

    //notas
    cem = trunc(entrada / 100);
    resto = fmod(entrada, 100);
    cinq = trunc(resto / 50);
    resto = fmod (resto, 50);
    vint = trunc(resto / 20);
    resto = fmod(resto, 20);
    dez = trunc(resto / 10);
    resto = fmod(resto, 10);
    cinc = trunc(resto / 5);
    resto = fmod(resto, 5);
    dois = trunc(resto / 2);
    resto = fmod(resto, 2);

    //output
    cout << entrada << "\n";
    cout << cem << " nota(s) de R$ 100,00" << "\n";
    cout << cinq << " nota(s) de R$ 50,00" << "\n";
    cout << vint << " nota(s) de R$ 20,00" << "\n";
    cout << dez << " nota(s) de R$ 10,00" << "\n";
    cout << cinc << " nota(s) de R$ 5,00" << "\n";
    cout << dois << " nota(s) de R$ 2,00" << "\n";
    cout << resto << " nota(s) de R$ 1,00" << "\n";

    return 0;
}