#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    string nome;
    double fixo, comm, commperc, sal;

    cin >> nome >> fixo >> comm;
    comm = comm / 100;
    commperc = comm*15;
    sal = fixo + commperc;
    cout << "TOTAL = R$ " << setprecision(2) << fixed << sal << "\n";
 
    return 0;
}