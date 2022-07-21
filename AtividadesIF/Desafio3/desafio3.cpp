/*Criar um vetor de 1000 elementos, com valores aleatórios, organizar em ordem crescente, 
mostrar quantas vezes ele repete, qual valor repete, e a posição.*/

#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int num, maior, menor,aux;
    int vet[1000];
    int vetIgual[1000];
    int vetRepet[1000];
    int cont = 0;
    

    srand((unsigned)time(0));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i <1000; i++){
        vet[i] = rand()%(maior-menor+1)+menor;
    }

    cout << "\nO vetor desordenado é: \n";

    for(int i = 0; i < 1000; i++){
        cout << vet[i] << " ";
    }

    cout << "\n";

    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 1000; j++){
            if (vet[i] < vet[j]){        

                aux = vet[i]; 
                vet[i] = vet[j];
                vet[j] = aux;
                        
            }
        }
    }

    int k = 0;
    int contIgual = 0;
    int x = 0;
    int contRepet = 0;
    cont = 0;

    for (int la = 0; la < 1000; la++){
        
        for(int ca = la+1; ca < 1000; ca++){

            if (vet[la] == vet[ca]){
                cont++;    
            }
        }   

        if(cont == 1){
            vetIgual[k] = vet[la]; //guarda os numeros que possuem repetição em uma lista
            k++;
            contIgual++; // soma a quantidade de numeros que possuem repetição
            
        }
    cont = 0;

    }

    for (int i = 0; i < contIgual; i++){
        
        for (int j = 0; j < 1000; j++){
            if (vetIgual[i]==vet[j]){
                cont++;
            }
        }
        vetRepet[i] = cont; //guarda a quantidade de repetições para o mesmo número
        cont = 0;
    }

    cout << "\nExistem "<< contIgual << " números que se repetem, que são: \n";

    for (int i = 0; i < k; i++){
        cout << vetIgual[i] << " ";
    }

    cout << "\n";

    cout << "\nO vetor ordenado é: \n";

    for(int i = 0; i < 1000; i++){
        cout << vet[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < contIgual; i++){

        cout << "\nO número " << vetIgual[i] << " se repete " << vetRepet[i] << " vezes!";

    }

    cout << "\n";
    return 0;
}