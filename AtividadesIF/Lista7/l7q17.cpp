// Elaborar  um  programa  que  faça  a  leitura  de  20  valores  inteiros  em  uma  matriz  A  de  duas dimensões  com  quatro  linhas  e  cinco  colunas.  Construir  a  matriz  B  de  uma  dimensão  para quatro elementos que seja formada pelo somatório dos elementos correspondentes de cada linha da matriz A. Construir também a matriz C de uma dimensão para cinco elementos que seja formada pelo somatório dos elementos correspondentes de cada coluna da matriz A. Ao final,  o  programa  deve  apresentar  o somatório  dos  elementos  da  matriz B  com  o  somatório dos elementos da matriz C.


#include <iostream>
#include <ctime>
using namespace std;

int main(){

   float matA[4][5];
   float vetB[4];
   int vetC[5];
   int maior, menor, somaVetB;
 
    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            matA[i][j]=rand()%(maior-menor+1)+menor;
        }
    }

    for (int i = 0; i<4; i++){
        somaVetB = 0;
        for(int j = 0; j<5; j++){
            somaVetB = somaVetB + matA[i][j];
        }
        vetB[i] = somaVetB;
    }

    for (int k = 0; k< 5; k++){
        vetC[k]=0;
        for (int i = 0; i<4; i++){
            for(int j = 0; j<5; j++){
                if (j==k) {
                    vetC[k] = vetC[k] + matA[i][j];
                }
            }
        }
    }

    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Vetor B";
    cout << "\n";

    for (int i = 0; i<4; i++){
            cout << vetB[i] << " ";
    }

    cout << "\n Vetor C";
    cout << "\n";

    for (int i = 0; i<5; i++){
            cout << vetC[i] << " ";
    }
    cout << "\n";

    return 0;
}