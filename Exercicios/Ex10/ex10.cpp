#include <iostream>
using namespace std;

int main(){
    int Nota1, Nota2, SomaNotas;
    string Teste;
    cout << "Digite a primeira nota: " << endl;
    cin >> Nota1;
    cout << "Digite a segunda nota: " << endl;
    cin >> Nota2;
    SomaNotas = Nota1 + Nota2;
    Teste = (SomaNotas >= 60) ? "Aprovado!" : "Reprovado!";
    cout << "Estado atual do aluno: " << Teste << endl;
    return 0;
}