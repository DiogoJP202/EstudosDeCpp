#include <iostream>

using namespace std;

int main(){
    int npalavras;
    cout << "quantas palavras? " << endl;
    cin >> npalavras;
    string palavras[npalavras];
    while(npalavras > 0){
        cout << "Escreva um palavras!" << endl;
        cin >> palavras[npalavras];
        npalavras --;
    }
    cout << sizeof(palavras) << endl;
    for(int x = 0; x < sizeof(palavras)/4; x++){
    cout << palavras[x];
    }

    return 0;
}