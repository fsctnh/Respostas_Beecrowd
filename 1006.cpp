#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double a,b,c,ap,bp,cpes,soma, res;
    cin >> a >> b >> c;
    ap = a*2;
    bp = b*3;
    cpes = c*5;
    soma = ap + bp + cpes;
    res = soma / 10;
    
    cout << "MEDIA = " << setprecision(1) << fixed << res << "\n";
    return 0;
}