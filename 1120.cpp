#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int a, b, tamanho;
    cin >> a >> b;
    string temp;
    temp = to_string(b);
    tamanho = temp.length();

    for (int i = 0; i < tamanho; i++){
        if (temp[i] == a){
            temp.erase(i, 1);
        }
    }
    cout << temp;
    
    return 0;
}