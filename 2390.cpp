#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
int main()
{
    int x, a;
    int instante=0;
    int soma=10;
    vector<int> fila;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> a;
        fila.push_back(a);
    }
    
    for(int i = 1; i < x; i++){
        if(fila[i] - fila[i-1] >= 10){
            soma += 10;
            instante=0;
        }
        else{
            instante += fila[i] - fila[i-1];
            soma += instante;
            instante =0;
        }
        if (i == x-1 && instante != 0){
            soma += instante;
        }
    }

    cout << soma << endl;
    return 0;
}