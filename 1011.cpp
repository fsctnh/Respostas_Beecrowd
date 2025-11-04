#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double pi = 3.14159;
    double raio, qt, resultado;
    cin >> raio;
    qt = 4 / 3.0;
    raio = raio * raio * raio;
    resultado = qt * pi * raio;
    cout << "VOLUME = " << setprecision(3) << fixed << resultado << "\n";
    return 0;
}