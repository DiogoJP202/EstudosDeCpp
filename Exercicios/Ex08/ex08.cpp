#include <iostream>
#include <cstdlib>
using namespace std;

int num;
int main(){
    inicio:
    system("cls");
    cout << "Escreva um numero entre 1 e 100: " << endl;
    cin >> num;
    if(num <= 100 && num >= 1){
        cout << "Parabens!! voce sabe ler!";
    } else if(num > 100){
        cout << "Ops! leia direito, o numero ultrapassou 100!" << endl;
        system("pause");
        goto inicio;
    } else if(num < 1){
         cout << "Ops! leia direito, o numero e menor que 1!" << endl;
        system("pause");
        goto inicio;
    }
}