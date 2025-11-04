#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int a, b, c, maiorab;
    cin >> a >> b >> c;
    maiorab = (a+b+abs(a-b)) / 2;
    if (maiorab >= c){
        cout << maiorab << " eh o maior\n";
    }
    else{
        cout << c << " eh o maior\n";
    }
    return 0;
}