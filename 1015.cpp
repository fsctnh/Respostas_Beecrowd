#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
    float x1, y1, x2, y2, ssq1, ssq2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    ssq1 = x2 - x1;
    ssq2 = y2 - y1;
    cout << setprecision(4) << fixed << sqrt((ssq1 * ssq1) + (ssq2 * ssq2)) << "\n";
 
    return 0;
}