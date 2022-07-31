// Elaborar  um  programa  que  leia  uma  matriz  A  do  tipo  real  de  duas  dimensões  com  cinco linhas e cinco colunas. Apresentar o somatório dos elementos situados nas posições de linha e coluna ímpares da diagonal principal (A[1,1], A[3,3], A[5,5]) da referida matriz.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

   int matA[5][5];
   int maior, menor, soma;
   soma=0;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            matA[i][j]=rand()%(maior-menor+1)+menor;
        }
    }

    for (int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            if( i == j){
                if((i%2!=0)){
                    soma = soma + matA[i][j]; 
                }
            }
        }
    }
    
    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Soma dos índices ímpares da diagonal principal:";
    cout << "\n";

    cout << soma;

    cout << "\n";

    return 0;
}