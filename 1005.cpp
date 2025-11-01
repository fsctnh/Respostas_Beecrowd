#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double a,b,ap,bp, soma, c;
    cin >> a >> b;
    ap = a*3.5;
    bp = b*7.5;
    soma = ap + bp;
    c = soma / 11;
    
    cout << "MEDIA = " << setprecision(5) << fixed << c << "\n";
    return 0;
}