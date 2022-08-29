#include <iostream>
using namespace std;

int main(){
    char palavra1[]= {'b','a','t','a','t','a'};
    char palavra2[]= {'a','b','a','c','a','t','e'};
    string palavras[]={palavra1, palavra2};
    int vidas = 10; //numero de vidas caso o usuario erre uma letra
    int chave;
    int contador;
    cout << "O jogo comecou!" << endl << "Escolha um dos numeros a seguir para comecar: (1,2)" << endl;
    cin >> chave;
    for (char resposta; resposta != palavras[chave];){
    for (int x; x < sizeof(palavras[chave])/4; x++) {
        for (char letra; )

    }
    }
}