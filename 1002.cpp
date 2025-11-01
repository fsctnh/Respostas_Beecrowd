#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double pi = 3.14159;
    double area, raioquad, raio;

    cin >> raio;
    raioquad = raio * raio;
    area = pi * raioquad;

    cout << "A=" << setprecision (4) << fixed << area << "\n";

    return 0;
}