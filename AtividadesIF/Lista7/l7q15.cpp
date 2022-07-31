// Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com oito linhas e seis colunas. Construir a matriz B de uma dimensão que seja formada pela soma de cada linha da matriz A. Ao final, apresentar o somatório dos elementos da matriz B.


#include <iostream>
#include <ctime>
using namespace std;

int main(){

   float matA[8][6];
   float vetB[8];
   int maior, menor, soma;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i<8; i++){
        for(int j = 0; j<6; j++){
            matA[i][j]=rand()%(maior-menor+1)+menor;
        }
    }

    for (int i = 0; i<8; i++){
        soma = 0;
        for(int j = 0; j<6; j++){

            soma = soma + matA[i][j];

        }
        vetB[i] = soma;
    }
    
    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 0; i<8; i++){
        for(int j = 0; j<6; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Vetor B";
    cout << "\n";

    for (int i = 0; i<8; i++){
            cout << vetB[i] << " ";
    }

    return 0;
}