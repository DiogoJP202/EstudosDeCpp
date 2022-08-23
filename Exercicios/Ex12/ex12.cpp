#include <iostream>
using namespace std;

int main(){
    int semana = 1;
    while (semana <= 7)
    {
        switch (semana)
        {
            case 1:
                cout << "Segunda. \n";
                break;
            case 2:
                cout << "Terca. \n";
                break;
            case 3:
                cout << "Quarta. \n";
                break;
            case 4:
                cout << "Quinta. \n";
                break;
            case 5:
                cout << "Sexta. \n";
                break;
            case 6:
                cout << "Sabado. \n";
                break;
            case 7:
                cout << "Domingo. \n";
                cout << "A semana recomecou. \n";
                break;
        }
        semana ++;
    }
    
    return 0;
}