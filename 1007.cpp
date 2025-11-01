#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int a, b, c, d, prodAB, prodCD, dif;
    cin >> a >> b >> c >> d;
    prodAB = a*b;
    prodCD = c*d;
    dif = prodAB - prodCD;
    cout << "DIFERENCA = " << dif << "\n";
    
    return 0;
}