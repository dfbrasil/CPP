// Elaborar  um  programa  que  faça  a  leitura  de  duas  matrizes  A  e  B  de  duas  dimensões  com cinco  linhas  e  cinco  colunas.  A  matriz  A  deve  ser  formada  por  valores  que  não  sejam divisíveis por 3, enquanto a matriz B deve ser formada por valores que não sejam divisíveis 
// por 6. As entradas dos valores nas matrizes devem ser validadas pelo programa, e não pelo 
// usuário.  Construir  e  apresentar  uma matriz  C  de  mesma  dimensão  e  número  de  elementos 
// que contenha a soma dos elementos das matrizes A e B.


#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int matA[5][5];
    int matB[5][5];
    int matC[5][5];
    int maior, menor, numA, numB;
    int contA = 0;
    int contB = 0;
 
    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    int i = 0;
    int j = 0;

    while (contA < 30){
        numA = rand()%(maior-menor+1)+menor;
        if (numA%3!=0){
            contA++;
            matA[i][j] = numA;
            j++;
            if (j == 5){
                i++;
                j=0;
            }   
        }
    }

    i = 0;
    j = 0;

    while (contB < 30){
        numB= rand()%(maior-menor+1)+menor;
        if (numB % 6!=0){
            contB++;
            matB[i][j] = numB;
            j++;
            if (j == 5){
                i++;
                j=0;
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

    cout << "\n Matriz B";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cout << matB[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Matriz Soma";
    cout << "\n";

    for (int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            matC[i][j] = matB[i][j] + matA[i][j];
            cout << matC[i][j] << " ";
        }
    cout << "\n";
    }
    return 0;
}