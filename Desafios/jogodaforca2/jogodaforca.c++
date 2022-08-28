#include <iostream>
using namespace std;

int main(){
    string palavras[2];
    char palavra1[] = {'b','a','t','a','t','a'};
    char palavra2[]= {'a','b','a','c','a','t','e'};
    int vidas = 10; //numero de vidas caso o usuario erre uma letra
    int num;
    int contador;
    palavras[0] = palavra1;
    palavras[1] = palavra2;
    cout << "O jogo comecou!" << endl << "Escolha um dos numeros a seguir para comecar: [1,2]";
    cin >> num;

    for(int contador; contador < sizeof(palavras[num])/4; contador++ ){
        if(num == 1){
            
        }
        }
}