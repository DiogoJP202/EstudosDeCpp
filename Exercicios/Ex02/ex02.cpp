#include <iostream>
using namespace std;

int main(){
    int idade = 2;
    int vidas = 5;
    string nome = "Diogo";
    bool morto =  false;
    float numero = 4.77;

    cout << "Escreva seu nome: ";
    cin >> nome;
    cout << "Escreva sua idade: ";
    cin >> idade;
    cout << "De um numero de vidas ao seu personagem: ";
    cin >> vidas;
    cout << "Status: ";
    cin >> numero;
    cout  << "Nome: " << nome << endl << "Idade = "<< idade << endl << "Numero de vidas= " << vidas << endl << morto << endl << numero << endl;
    system("pause");
    return 0;
} 