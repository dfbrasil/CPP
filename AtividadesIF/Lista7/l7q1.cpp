// Elaborar  um  programa  que  leia  duas  matrizes  A  e  B,  cada  uma  de  duas  dimensões  com cinco linhas  e  três colunas  para valores inteiros. Construir uma  matriz C de  mesma dimensão,  que  seja  formada  pela  soma  dos  elementos  da  matriz  A  com  os  elementos  da matriz B. Apresentar os elementos da matriz C. 

#include <iostream>
#include <ctime>
using namespace std;

int main(){

   long int matA[5][3];
   long int matB[5][3];
   long int matC[5][3];

    srand(unsigned(time(0)));

    for (int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            matA[i][j]=rand();
        }
    }
    for (int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            matB[i][j]=rand();
        }
    }
    for (int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            matC[i][j] = ((matA[i][j]) + (matB[i][j]));
        }
    }

    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Matriz B";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            cout << matB[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Matriz Soma";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            cout << matC[i][j] << " ";
        }
    cout << "\n";
    }

    return 0;
}