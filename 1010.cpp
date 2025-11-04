#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int c1, n1, c2, n2;
    float v1, v2, res;
    cin >> c1 >> n1 >> v1;
    cin >> c2 >> n2 >> v2;

    res = n1 * v1 + n2 * v2;
    cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << res << "\n";
 
    return 0;
}