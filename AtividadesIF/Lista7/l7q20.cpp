// Elaborar um programa que leia duas matrizes A e B de duas dimensões com quatro linhas e 
// cinco  colunas.  A  matriz  A  deve  ser  formada  por  valores  divisíveis  por  3  e  4,  enquanto  a matriz  B  deve  ser  formada  por  valores  divisíveis  por  5  ou  6.  As  entradas  dos  valores  nas matrizes  devem  ser  validadas  pelo  programa,  e  não  pelo  usuário.  Construir  e  apresentar  a matriz  C  de  mesma  dimensão  e  número  de  elementos  que  contenha  a  subtração  dos elementos da matriz A em relação aos elementos da matriz B.


#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int mat34[4][5];
    int mat56[4][5];
    int matC[4][5];
    int maior, menor, num34, num56;
    int cont34 = 0;
    int cont56 = 0;
 
    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    int i = 0;
    int j = 0;

    while (cont34 < 30){
        num34 = rand()%(maior-menor+1)+menor;
        if ((num34%3==0) && (num34%4==0)){
            cont34++;
            mat34[i][j] = num34;
            j++;
            if (j == 5){
                i++;
                j=0;
            }   
        }
    }

    i = 0;
    j = 0;

    while (cont56 < 30){
        num56= rand()%(maior-menor+1)+menor;
        if ((num56 % 5==0) || (num56 % 6==0)){
            cont56++;
            mat56[i][j] = num56;
            j++;
            if (j == 5){
                i++;
                j=0;
            }   
        }
    }

    cout << "\n Matriz TRÊS E QUATRO";
    cout << "\n";

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            cout << mat34[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Matriz CINCO ou SEIS";
    cout << "\n";

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            cout << mat56[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Matriz Diferença";
    cout << "\n";

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            matC[i][j] = mat56[i][j] - mat34[i][j];
            cout << matC[i][j] << " ";
        }
    cout << "\n";
    }
    return 0;
}