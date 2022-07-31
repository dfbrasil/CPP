// Elaborar  um  programa  que  leia  uma  matriz  A  de  duas  dimensões  com  dez  linhas  e  sete colunas.  Ao  final,  apresentar  o  total  de  elementos  pares  e  ímpares  existentes  na  matriz. Apresentar  também  o  percentual  de  elementos  pares  e  ímpares  em  relação  ao  total  de elementos da matriz. Supondo a existência de 20 elementos pares e 50 elementos ímpares, haveria 28,6% de elementos pares e 71,4% de elementos ímpares.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

   int matA[10][7];
   int maior, menor;
   float contPar = 0;
   float contImpar = 0;
   float contTotal = 0;

    srand(unsigned(time(0)));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 1; i<=10; i++){
        for(int j = 1; j<=7; j++){
            matA[i][j]=rand()%(maior-menor+1)+menor;
        }
    }

    for (int i = 1; i<=10; i++){
        for(int j = 1; j<=7; j++){
            if( (matA[i][j]) % 2 == 0){
                contPar++;
            }
            else{
                contImpar++;
            }
        contTotal++;
        }
    }
    
    cout << "\n Matriz A";
    cout << "\n";

    for (int i = 1; i<=10; i++){
        for(int j = 1; j<=7; j++){
            cout << matA[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\nQuantitade total de valores:";
    cout << "\n";

    cout << contTotal;

    cout << "\n";

    cout << "\nQuantidade e porcentagem de valores pares:";
    cout << "\n";

    cout << contPar << " , " << (contPar/contTotal)*100 << "%";

    cout << "\n";

    cout << "\nQuantidade e porcentagem de valores ímpares:";
    cout << "\n";

    cout << contImpar << " , " <<(contImpar/contTotal)*100 << "%";

    cout << "\n";

    return 0;
}