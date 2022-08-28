#include <iostream>
using namespace std;

int main(){
    int x, y;
    char valor;
    char matrizQuadrada [3] [3];

    cout << "Escolha 9 Letras: " << endl;

    for (x = 0; x < 3; x++) {
      for (y =0; y < 3; y++) {
        cin >> valor;
        matrizQuadrada [x] [y] = valor;
      }
    }

  for (x = 0; x < 3; x++) {
    for (y =0; y < 3; y++) {
      cout << matrizQuadrada [x] [y] << " ";
    }
    cout << endl;
  }
}