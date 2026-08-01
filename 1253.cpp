#include <iostream>
#include <string>

using namespace std;

int main(){

    int z;
    cin >> z;
    string a;
    int b;
    while (z--){
        cin >> a;
        cin >> b;

        for(int i = 0; i < a.length(); i++){
            char temp = a[i];
            a[i] = ((a[i] - 'A' - b + 26) % 26 ) + 'A';
        }
        cout << a << endl;
    }

    return 0;
}