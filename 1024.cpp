#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cctype>

using namespace std;

int main(){
    int numero, tamanho;
    char aux;
    string entry;
    cin >> numero;
    cin.ignore();

    for(int i = 0; i < numero; ++i){
        getline(cin, entry);

        tamanho = entry.length();
        for(int j = 0; j < tamanho; ++j){
            if(isalpha(entry[j])){
                entry[j] += 3;
            }
        }
        for(int j = 0; j < numero/2; ++j){
            aux = entry[j];
            entry[j] = entry[entry.length() - 1 - j];
            entry[entry.length() - 1 - j] = aux;
        }
        for(int j = numero/2; j < numero; ++j){
            --entry[j];
        }

        cout << entry << "\n";
    }

    return 0;
}