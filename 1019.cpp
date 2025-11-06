#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int a, h, m, s, resto;
    cin >> a;

    h = a / 3600;
    resto = a - (h * 3600);
    m = resto / 60;
    resto -= (m * 60);
    s = round(resto);

    cout << h << ":" << m << ":" << s << "\n";
    return 0;
}