#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int hor, vel;
    float exit;

    cin >> hor;
    cin >> vel;

    exit = (hor * vel) / 12.0;
    cout << setprecision(3) << fixed << exit << "\n";
    
    return 0;
}