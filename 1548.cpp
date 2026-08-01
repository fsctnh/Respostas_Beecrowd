#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n;
    int cont=0;
    cin >> n;
    int p, q;
    while (n--){
        cin >> p;
        vector<int> fila, organizada;
        for(int i = 0; i < p; i++){
            cin >> q;
            fila.push_back(q);
            organizada.push_back(q);
        }
        sort(organizada.begin(), organizada.end(), greater<int>());
        for(int i = 0; i < p; i++){
            if (fila[i] == organizada[i]){
                cont += 1;
            }
        }
        cout << cont << endl;
        cont = 0;
    }
    return 0;
}