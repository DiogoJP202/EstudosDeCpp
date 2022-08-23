#include <iostream>
using namespace std;

int main(){
    inicio:
    char resp1;
    char resp2;
    cout << "Voce gosta de mario?[s/n] " << endl;
    cin >> resp1;
    cout << "Voce gosta do luigi?[s/n] " << endl;
    cin >> resp2;
    if (((resp1 != 's' && resp1 != 'S') && (resp1 != 'n' && resp1 != 'N')) || ((resp2 != 's' && resp2 != 'S') && (resp2 != 'n' && resp2 != 'N')) ){
        cout << "Digite apenas s ou n!" << endl;
        goto inicio;
    } else if((resp1 == 'S' || resp1 == 's') || (resp2 == 'S' || resp2 == 's')){
        cout << "Voce gosta do jogo mario!" << endl;
    } else {
        cout << "Voce nao gosta do jogo mario!" << endl;
    }
    return 0;
}