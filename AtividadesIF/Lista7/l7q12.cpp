// Elaborar  um  programa  que  leia  uma  matriz  A  de  duas  dimensões  com  15  linhas  e  15 colunas.  Apresentar  o  somatório  dos  elementos  pares  situados  na  diagonal  principal  da referida matriz.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

   int matA[15][15];
   int maior, menor, soma;
   soma=0;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i<15; i++){
        for(int j = 0; j<15; j++){
            matA[i][j]=rand()%(maior-menor+1)+menor;
        }
    }

    for (int i = 0; i<15; i++){
        for(int j = 0; j<15; j++){
            if( i == j){
                if(matA[i][j]%2==0){
                    soma = soma + matA[i][j]; 
                }
            }
        }
    }
    
    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 0; i<15; i++){
        for(int j = 0; j<15; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Soma dos valores pares da diagonal principal:";
    cout << "\n";

    cout << soma;

    cout << "\n";

    return 0;
}