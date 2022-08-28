#include <iostream> 
using namespace std;

int main(){
    inicio:
    int vida = 10;
    char palavra[7];//abacaxi
    char p[sizeof(palavra)];

    palavra[0] = 'a';
    palavra[1] = 'b';
    palavra[2] = 'a';
    palavra[3] = 'c';
    palavra[4] = 'a';
    palavra[5] = 'x';
    palavra[6] = 'i';

    cout << "O jogo comecou!" << endl << "A palavra possui " << sizeof(palavra) << " letras" << endl;
    for (int x = 0; x < sizeof(palavra); x++){
        for (char letra; letra != palavra[x]; x = x){
            cout << "Tente uma letra" << endl;
            cin >> letra;
            if ( letra == palavra[x]){
                cout << "Voce acertou uma letra! " << endl;
            } else {
                cout << "Voce errou uma letra! -1 de vida! Restam " << vida << " vidas" << endl;
                vida --;
                if(vida == 0){
                    cout << "GAME OVER! numeros de vidas chegaram em 0." << endl;
                    goto inicio;
                }
            }
        }
    }
    cout << "PARABENS! voce acertou a palavra! Resposta = " << palavra << endl;
}