#include <iostream>
using namespace std;
int main(){
    int n1, n2, soma;
    char voltar;
    inicio:
    cout << "Digite a primeira nota: " << endl;
    cin >> n1;
    cout << "Digite a segunda nota: " << endl;
    cin >> n2;
    soma = n1 + n2;
    if (soma >= 60){
        cout << "Aluno Aprovado!" << endl;
    } else {
        cout << "Aluno Reprovado!" << endl;
    }
    cout << "Deseja voltar?[s/n]" << endl;
    cin >> voltar;
    if (voltar == 's' or voltar == 'S'){
        goto inicio;
    }
    return 0;

}