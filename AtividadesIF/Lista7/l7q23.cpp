// Elaborar  um  programa  que  leia  uma  matriz  A  do  tipo  inteira  de  duas  dimensões  com  cinco linhas e cinco colunas. Construir uma matriz B de mesma dimensão, em que cada elemento 
// seja  o  dobro  de  cada  elemento  correspondente  da  matriz  A,  com  exceção  dos  valores 
// situados na diagonal inversa (posições B[1,5], B[2,4], B[3,3], B[4,2] e B[5,1]), os quais devem 
// ser o triplo de cada elemento correspondente da matriz A. Apresentar ao final a matriz B.


#include <iostream>
#include <ctime>
using namespace std;

int main(){

   int matA[5][5];
   int matB[5][5];

   int maior, menor;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            matA[i][j]=rand()%(maior-menor+1)+menor;
        }
    }

    for (int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            if((i + j) == 4){
                matB[i][j] = matA[i][j] * 3;
            }
            else{
                matB[i][j] = matA[i][j] * 2;
            }
        }
    }
    
    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n";
    cout << "\n Matriz B";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cout << matB[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n";

    return 0;
}