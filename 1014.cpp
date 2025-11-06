#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double X, Y, Z;
    cin >> X;
    cin >> Y;
    Z = X / Y;

    cout << setprecision(3) << fixed << Z << " km/l\n";
    
 
    return 0;
}