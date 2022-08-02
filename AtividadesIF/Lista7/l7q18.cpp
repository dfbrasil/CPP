// Elaborar  um  programa  que  leia  quatro  matrizes  A,  B,  C  e  D  de  uma  dimensão  com  quatro elementos. Construir uma matriz E de duas dimensões do tipo 4 × 4, sendo a primeira linha formada  pelo  dobro  dos  valores  dos  elementos  da  matriz  A,  a  segunda  linha  formada  pelo triplo  dos  valores  dos  elementos  da  matriz  B,  a  terceira  linha  formada  pelo  quádruplo  dos valores  dos  elementos  da  matriz  C  e  a  quarta  linha  formada  pelo  fatorial  dos  valores  dos elementos da matriz D. Apresentar a matriz E. 


#include <iostream>
#include <ctime>
using namespace std;

int main(){

   int matE[4][4];
   int matA[4];
   int matB[4];
   int matC[4];
   int matD[4];
   int maior, menor, fat, n;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i<4; i++){
        matA[i]=rand()%(maior-menor+1)+menor;
        matB[i]=rand()%(maior-menor+1)+menor;
        matC[i]=rand()%(maior-menor+1)+menor;
        matD[i]=rand()%(maior-menor+1)+menor;
    }


    for (int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){

            if (i==0){
                matE[i][j] = matA[j]*2;
            }
            if (i==1){
                matE[i][j] = matB[j]*3;
            }
            if (i==2){
                matE[i][j] = matC[j]*4;
            }
            if( i==3){
                n = matD[j];
                fat = 1;
                for(int k = n; k > 0; k--){
                    fat = fat * k;
                }
                matE[i][j] = fat;
            }            
        }
    }
    
    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 0; i<4; i++){
            cout << matA[i] << " ";
    cout << "\n";
    }

    cout << "\n Matriz B";
    cout << "\n";
    for (int i = 0; i<4; i++){
            cout << matB[i] << " ";
    cout << "\n";
    }

    cout << "\n Matriz C";
    cout << "\n";
    for (int i = 0; i<4; i++){
            cout << matC[i] << " ";
    cout << "\n";
    }

    cout << "\n Matriz D";
    cout << "\n";
    for (int i = 0; i<4; i++){
            cout << matD[i] << " ";
    cout << "\n";
    }
    
    cout << "\n Matriz E";
    cout << "\n";

    for (int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cout << matE[i][j] << " ";
        }
    cout << "\n";
    }

    return 0;
}
