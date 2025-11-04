#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double a, b, c;
    double ra, rb, rc, d, e;
    float pi = 3.14159;
    cin >> a >> b >> c;
    //calc A:
    ra = (a*c) / 2;
    //b
    rb = (c * c) * pi;
    //c
    double ab = a + b;
    rc = (ab * c) / 2;
    //d
    d = b * b;
    //e
    e = a*b;

    //impressões:
    cout << "TRIANGULO: " << setprecision(3) << fixed << ra << "\n";
    cout << "CIRCULO: " << setprecision(3) << fixed << rb << "\n";
    cout << "TRAPEZIO: " << setprecision(3) << fixed << rc << "\n";
    cout << "QUADRADO: " << setprecision(3) << fixed << d << "\n";
    cout << "RETANGULO: " << setprecision(3) << fixed << e << "\n";

    return 0;
}