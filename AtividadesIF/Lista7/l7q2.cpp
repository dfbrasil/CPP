// Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para sete 
// elementos  inteiros.  Construir  uma  matriz  C  de  duas  dimensões,  cuja  primeira  coluna  deve ser formada pelos elementos da matriz  A e a segunda coluna pelos elementos da matriz B. Apresentar a matriz C.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

   int vetA[7];
   int vetB[7];
   int matC[7][2];

    srand(unsigned(time(0)));

    for (int i = 0; i<7; i++){
        vetA[i]=rand();
    }
    for (int i = 0; i<7; i++){
        vetB[i]=rand();
    }

    for (int i = 0; i<7; i++){
        for(int j = 0; j<2; j++ ){

            if(j==0){
                matC[i][j] = vetA[i];
            }
            else{
                matC[i][j] = vetB[i];
            }
        }
    }
    
    cout << "\n Vetor A";
    cout << "\n";

    for (int i = 0; i<7; i++){
        cout << vetA[i]<< " ";
    cout << "\n";
    }

    cout << "\n Vetor B";
    cout << "\n";

    for (int i = 0; i<7; i++){
       cout << vetB[i]<< " ";
    cout << "\n";
    }

    cout << "\n Matriz União";
    cout << "\n";

    for (int i = 0; i<7; i++){
        for(int j = 0; j<2; j++){
            cout << matC[i][j] << " ";
        }
    cout << "\n";
    }

return 0;

}