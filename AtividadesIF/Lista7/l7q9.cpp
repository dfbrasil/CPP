// Elaborar  um  programa  que  leia  uma  matriz  A  do  tipo  inteira  de  duas  dimensões  com  sete linhas e sete colunas. Construir a matriz B de mesma dimensão, em que cada elemento seja o somatório de 1 até o valor armazenado na posição da matriz A, com exceção dos valores situados  nos índices ímpares  da  diagonal  principal  (B[1,1],  B[3,3],  B[5,5]  e  B[7,7]),  os  quais devem  ser  o  fatorial  de  cada  elemento  correspondente  da  matriz  A.  Apresentar  ao  final  a matriz B.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

   long int matA[7][7];
   long int matB[7][7];
   long int maior, menor, soma, fat, n, l, c;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 1; i<8; i++){
        for(int j = 1; j<8; j++){
            matA[i][j]=rand()%(maior-menor+1)+menor;
        }
    }

    for (int i = 1; i<8; i++){
        for(int j = 1; j<8; j++){

            if(( i == j) and (i%2!=0) and (j%2!=0)){
                n = matA[i][j];
                fat = 1;
                for(int k = n; k > 0; k--){
                    fat = fat * k;
                }
                matB[i][j] = fat;
                l=i;
                c=j;
            }
                
            else{
                soma = 0;
                n = matA[i][j];
                for (int i = 0; i <=n ; i++){
                    soma = soma + i;
                }

            matB[i][j] = soma;
            }
            
        }
    }
    
    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 1; i<8; i++){
        for(int j = 1; j<8; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Matriz B";
    cout << "\n";

    for (int i = 1; i<8; i++){
        for(int j = 1; j<8; j++){
            cout << matB[i][j] << " ";
        }
    cout << "\n";
    }

    return 0;
}