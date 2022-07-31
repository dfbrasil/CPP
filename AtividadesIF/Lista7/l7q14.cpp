// Elaborar  um  programa  que  leia  uma  matriz  A  de  duas  dimensões  com  sete  linhas  e  sete colunas. Ao final, apresentar o total de elementos pares existentes na matriz.


#include <iostream>
#include <ctime>
using namespace std;

int main(){

   int matA[7][7];
   int maior, menor, soma;
   soma=0;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 1; i<=7; i++){
        for(int j = 1; j<=7; j++){
            matA[i][j]=rand()%(maior-menor+1)+menor;
        }
    }

    for (int i = 1; i<=7; i++){
        for(int j = 1; j<=7; j++){
            if( matA[i][j] % 2 == 0){
                soma++;
            }
        }
    }
    
    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 1; i<=7; i++){
        for(int j = 1; j<=7; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n Soma da quantidade dos valores pares:";
    cout << "\n";

    cout << soma;

    cout << "\n";

    return 0;
}