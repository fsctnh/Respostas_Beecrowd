#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double num, hor, phor;
    double sal;
    cin >> num >> hor >> phor;
    sal = hor*phor;

    cout << "NUMBER = " << num << "\n";
    cout << "SALARY = U$ " << setprecision(2) << fixed << sal << "\n";

    return 0;
}