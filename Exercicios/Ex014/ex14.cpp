#include <iostream>
using namespace std;

int main(){
    int x, y;
    char valor;
    char matrizQuadrada[3][3];

    for(x = 0; x < 3; x++){
        for(y =0; y < 3; y++){
            if( x % 2 == 0 ){
                valor = 'X';
            } else {
                valor = 'O';
            }
            matrizQuadrada[x][y] = valor;
        }
  }

    /*
    matrizQuadrada[0][0] = 'X';
    matrizQuadrada[1][0] = 'X';
    matrizQuadrada[2][0] = 'X';
    matrizQuadrada[0][1] = 'O';
    matrizQuadrada[1][1] = 'O';
    matrizQuadrada[2][1] = 'O';
    matrizQuadrada[0][2] = 'X';
    matrizQuadrada[1][2] = 'X';
    matrizQuadrada[2][2] = 'X';

   cout << matrizQuadrada[0][0] << matrizQuadrada[1][0] << matrizQuadrada[2][0] << endl <<  matrizQuadrada[0][1] << matrizQuadrada[1][1] << matrizQuadrada[2][1] << endl << matrizQuadrada[0][2] << matrizQuadrada[1][2] << matrizQuadrada[2][2];
   */
  for(x = 0; x < 3; x++){
    for(y =0; y < 3; y++){
        cout << matrizQuadrada[x][y] << " ";
    }
    cout << endl;
  }
}