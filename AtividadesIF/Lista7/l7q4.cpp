// Elaborar um programa que leia uma matriz A de uma dimensão com dez elementos inteiros. 
// Construir  uma  matriz  C  de  duas  dimensões  com  três  colunas,  sendo  a  primeira  coluna  da matriz  C  formada  pelos elementos  da  matriz  A  somados  com  5,  a segunda  coluna formada pelo valor do cálculo da fatorial de cada elemento correspondente da matriz A e a terceira e última  coluna  pelos  quadrados  dos  elementos  correspondentes  da  matriz  A.  Apresentar  a matriz C.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int maior, menor, fat, n;
    int vetA[10];
    int matC[10][3];

    srand((unsigned)time(0));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i <20; i++){
        vetA[i] = rand()%(maior-menor+1)+menor;
    }

    for (int i = 0; i<10; i++){
        for(int j = 0; j<3; j++ ){

            if(j==0){
                matC[i][j] = vetA[i] + 5;
            }

            if(j==1){
                n = vetA[i];
                fat = 1;
                for(int i = n; i > 0; i--){
                    fat = fat * i;
                }
                matC[i][j] = fat;
            }

            if(j==2){
                matC[i][j] = vetA[i];
            }
        }
    }

    cout << "\n Vetor A";
    cout << "\n";

    for (int i = 0; i<10; i++){
        cout << vetA[i]<< " ";
    cout << "\n";
    }

    cout << "\n Matriz União";
    cout << "\n";

    for (int i = 0; i<10; i++){
        for(int j = 0; j<3; j++){
            cout << matC[i][j] << " ";
        }
    cout << "\n";
    }

return 0;

}