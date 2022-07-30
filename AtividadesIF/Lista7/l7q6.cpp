// Elaborar um programa que leia uma matriz A de duas dimensões com cinco linhas e quatro 
// colunas. Construir uma matriz B de mesma dimensão, em que cada elemento seja o fatorial 
// de cada elemento correspondente armazenado na matriz A. Apresentar ao final as matrizes 
// A e B.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

   int matA[5][4];
   int matB[5][4];
   int maior, menor, n, fat;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i<5; i++){
        for(int j = 0; j<4; j++){
            matA[i][j]=rand()%(maior-menor+1)+menor;
        }
    }

    for (int i = 0; i<5; i++){
        for(int j = 0; j<4; j++){

            n = matA[i][j];
            fat = 1;
            for(int k = n; k > 0; k--){
                fat = fat * k;
            }
            matB[i][j] = fat;
        }
    }
    
    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<4; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Matriz B";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<4; j++){
            cout << matB[i][j] << " ";
        }
    cout << "\n";
    }

    return 0;
}