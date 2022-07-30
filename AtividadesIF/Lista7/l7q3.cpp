// Elaborar  um  programa  que  leia  20  elementos  para  uma  matriz  qualquer,  considerando  que essa matriz tenha o tamanho de quatro linhas por cinco colunas. Em, seguida, apresentar a matriz.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

   long int matA[4][5];

    srand(unsigned(time(0)));

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            matA[i][j]=rand();
        }
    }

    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n";
    return 0;
}