// Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20
// elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros
// vetores.

#include <iostream>
using namespace std;

int main(){

    int a,b;

    int vetA[10]; 
    int vetB[10]; 
    int vetC[20];

    for(int i=0; i < 10; i++){
        cout << "\nDigite um número pra inserir no vetor A: ";
        cin >> a;
        vetA[i] = a;        
    }

    for(int j=0; j < 10; j++){
        cout << "\nDigite um número pra inserir no vetor B: ";
        cin >> b;
        vetB[j] = b;        
    }

    int i = 0;
    int j = 0;

    for (int l = 0; l < 20; l++){
        
        if(l%2==0){
            vetC[l] = vetA[i];
            i++;
        }
        else{
            vetC[l] = vetB[j];
            j++;
        }
    }

    for (int k = 0; k < 20; k++){

        cout << vetC[k] << ' ';
    }

    return 0;

}