#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int y = 5;
    double divi = x/y;// Número real.
    cout << "O valor de x equivale a " << x << " e de y corresponde a " << y << "." << endl;
    cout << "A soma entre x e y torna-se " << x + y << endl;
    cout << "A subtracao entre x e y transforma-se em " << x - y << endl;
    cout << "A multiplicacao entre x e y converte-se a " << x * y << endl;
    cout << "A divisao entre x e y torna-se " << x / y << endl;
    cout << "O resto da divisao entre x e y e igual a " << x % y << endl;
    system("pause");
    return 0;
}