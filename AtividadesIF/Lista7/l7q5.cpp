// Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para 12 
// elementos  reais.  Construir  uma  matriz  C  de  duas  dimensões,  sendo  a  primeira  coluna  da matriz  C  formada  pelos  elementos  da  matriz  A  multiplicados  por  2  e  a  segunda  coluna formada  pelos  elementos  da  matriz  B  subtraídos  de  5.  Apresentar  separadamente  as matrizes.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

   int vetA[12];
   int vetB[12];
   int matC[12][2];
   int maior, menor;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i<12; i++){
        vetA[i]=rand()%(maior-menor+1)+menor;
    }
    for (int i = 0; i<12; i++){
        vetB[i]=rand()%(maior-menor+1)+menor;
    }

    for (int i = 0; i<12; i++){
        for(int j = 0; j<2; j++ ){

            if(j==0){
                matC[i][j] = vetA[i] * 2;
            }
            else{
                matC[i][j] = vetB[i] - 5;
            }
        }
    }
    
    cout << "\n Vetor A";
    cout << "\n";

    for (int i = 0; i<12; i++){
        cout << vetA[i]<< " ";
    cout << "\n";
    }

    cout << "\n Vetor B";
    cout << "\n";

    for (int i = 0; i<12; i++){
       cout << vetB[i]<< " ";
    cout << "\n";
    }

    cout << "\n Matriz União";
    cout << "\n";

    for (int i = 0; i<12; i++){
        for(int j = 0; j<2; j++){
            cout << matC[i][j] << " ";
        }
    cout << "\n";
    }

return 0;

}