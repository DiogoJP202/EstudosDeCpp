#include <iostream>
using namespace std;

int main(){
    int classe;
    inicioc:
    cout << "Selecione uma classe para seguir: " << endl;
    cout << "[1]-Mago, [2]-Guerreiro, [3]-Arqueiro, [4]-Bardo ,[5]-Assasino." << endl;
    cin >> classe;

    switch(classe){
        case 1:
            cout << "Seu personagem e um mago! use suas magias!" << endl;
            break;
        case 2:
            cout << "Seu personagem e um guerreiro! use sua espada!" << endl;
            break;
        case 3:
            cout << "Seu personagem e um arqueiro! use seu arco!" << endl;
            break;
        case 4:
            cout << "Seu personagem e um bardo! motive seus companheiros!" << endl;
            break;
        case 5:
            cout << "Seu personagem e um assasino! nao seja detectado!" << endl;
            break;
        default:
            cout << "Apenas escreva os numeros mostrados anteriormente!" << endl;
            goto inicioc;
            system("pause");
    }
    cout << "personagem finalizado!" << endl;

    return 0;
}