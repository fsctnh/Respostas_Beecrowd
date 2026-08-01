#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main(){

    string a;
    while(getline(cin, a)){
        int cont = 0;
        int len = a.length();
        for(int i = 0; i < len; i++){
            if (a[i] != ' '){
                if (cont % 2 == 0){
                cont += 1;
                a[i] = toupper(a[i]);
                }
                else{
                cont += 1;
                    a[i] = tolower(a[i]);
                }
            }
        }
        cout << a << endl;
        cont = 0;
    }

    return 0;
}
