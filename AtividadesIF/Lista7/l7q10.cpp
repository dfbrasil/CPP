// Elaborar  um  programa  que  leia  uma  matriz  A  de  duas  dimensões  com  seis  linhas  e  cinco colunas. Construir a matriz B de mesma dimensão, que deve ser formada do seguinte modo: para cada elemento par da matriz A deve ser somado 5 e de cada elemento ímpar da matriz A deve ser subtraído 4. Apresentar ao final as matrizes A e B.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

   long int matA[6][5];
   long int matB[6][5];
   long int maior, menor;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i<6; i++){
        for(int j = 0; j<5; j++){
            matA[i][j]=rand()%(maior-menor+1)+menor;
        }
    }

    for (int i = 0; i<6; i++){
        for(int j = 0; j<5; j++){

            if(matA[i][j]%2==0){
                matB[i][j] = matA[i][j] + 5;
            }
                
            else{
            matB[i][j] = matA[i][j] - 4;
            }
        }
    }
    
    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 0; i<6; i++){
        for(int j = 0; j<5; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Matriz B";
    cout << "\n";

    for (int i = 0; i<6; i++){
        for(int j = 0; j<5; j++){
            cout << matB[i][j] << " ";
        }
    cout << "\n";
    }

    return 0;
}