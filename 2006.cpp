#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int resp, num, g1, g2, g3, g4, g5;
    cin >> resp;
    cin >> g1 >> g2 >> g3 >> g4 >> g5;
    
    if (g1 == resp){
        num += 1;
    }
    if (g2 == resp){
        num += 1;
    }
    if (g3 == resp){
        num += 1;
    }
    if (g4 == resp){
        num += 1;
    }
    if (g5 == resp){
        num += 1;
    }

    cout << num;
    return 0;
}