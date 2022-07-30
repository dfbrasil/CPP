// Elaborar um programa que leia uma matriz A de duas dimensões com quatro linhas e cinco 
// colunas, armazenando nessa matriz os valores das temperaturas em graus Celsius. 
// Construir a matriz B de mesma dimensão, em que cada elemento seja o valor da 
// temperatura em graus Fahrenheit de cada elemento correspondente da matriz A. Apresentar 
// ao final as matrizes A e B.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

   float matA[4][5];
   float matB[4][5];
   int maior, menor;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            matA[i][j]=rand()%(maior-menor+1)+menor;
        }
    }

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){

            matB[i][j] = ((9 * matA[i][j] )+160)/5;;
        }
    }
    
    cout << "\n Matriz °C";
    cout << "\n";

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Matriz °F";
    cout << "\n";

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            cout << matB[i][j] << " ";
        }
    cout << "\n";
    }

    return 0;
}