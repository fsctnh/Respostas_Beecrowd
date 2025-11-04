#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    double entrada, restomod;
    //notas
    int cem, cinq, vint, dez, cinc, dois;
    //moedas
    int m1, m50, m25, m10, m05, m01;
    cin >> entrada;
    int resto;
    restomod = entrada - trunc(entrada);

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

    //moedas
    m1 = trunc(resto);
    m50 = trunc(restomod / 0.5);
    restomod -= m50*0.5;
    m25 = trunc(restomod / 0.25);
    restomod -= m25*0.25;
    m10 = trunc(restomod / 0.1);
    restomod -= m10*0.1;
    m05 = trunc(restomod / 0.05);
    restomod -= m05*0.05;
    m01 = round(restomod / 0.01);
    restomod -= m01*0.010;

    cout << "NOTAS:\n";
    cout << cem << " nota(s) de R$ 100.00" << "\n";
    cout << cinq << " nota(s) de R$ 50.00" << "\n";
    cout << vint << " nota(s) de R$ 20.00" << "\n";
    cout << dez << " nota(s) de R$ 10.00" << "\n";
    cout << cinc << " nota(s) de R$ 5.00" << "\n";
    cout << dois << " nota(s) de R$ 2.00" << "\n";

    cout << "MOEDAS:\n";
    cout << m1 << " moeda(s) de R$ 1.00" << "\n";
    cout << m50 << " moeda(s) de R$ 0.50" << "\n";
    cout << m25 << " moeda(s) de R$ 0.25" << "\n";
    cout << m10 << " moeda(s) de R$ 0.10" << "\n";
    cout << m05 << " moeda(s) de R$ 0.05" << "\n";
    cout << m01 << " moeda(s) de R$ 0.01" << "\n";

    return 0;
}