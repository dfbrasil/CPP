// Elaborar  um  programa  que  leia  duas  matrizes  A  e  B,  cada  uma  de  duas  dimensões  com cinco linhas e seis colunas. A matriz A deve aceitar a entrada de valores pares, enquanto a matriz B deve aceitar a entrada de valores ímpares. As entradas dos valores nas matrizes A e B devem ser validadas pelo programa, e não pelo usuário. Construir a matriz C de mesma dimensão,  que  seja  formada  pela  soma  dos  elementos  da  matriz  A  com  os  elementos  da matriz B. Apresentar os elementos da matriz C.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int matPar[5][6];
    int matImpar[5][6];
    int matC[5][6];
    int maior, menor, numPar, numImpar;
    int contPar = 0;
    int contImpar = 0;
 
    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    int i = 0;
    int j = 0;

    while (contPar < 30){
        numPar = rand()%(maior-menor+1)+menor;
        if (numPar%2==0){
            contPar++;
            matPar[i][j] = numPar;
            j++;
            if (j == 6){
                i++;
                j=0;
            }   
        }
    }

    i = 0;
    j = 0;

    while (contImpar < 30){
        numImpar= rand()%(maior-menor+1)+menor;
        if (numImpar%2!=0){
            contImpar++;
            matImpar[i][j] = numImpar;
            j++;
            if (j == 6){
                i++;
                j=0;
            }   
        }
    }

    cout << "\n Matriz Par";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<6; j++){
            cout << matPar[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Matriz Impar";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<6; j++){
            cout << matImpar[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Matriz Soma";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<6; j++){
            matC[i][j] = matPar[i][j] + matImpar[i][j];
            cout << matC[i][j] << " ";
        }
    cout << "\n";
    }
    return 0;
}