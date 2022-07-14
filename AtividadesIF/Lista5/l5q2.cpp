//Faça um Programa que preencha um vetor de 10 números reais e mostre-os na ordem inversa.
#include <iostream>
#include <ctime>
using namespace std;

int main(){

    float vet[10];
    srand((unsigned)time(0));

    for (int i = 0; i < 10; i++){
        
        vet[i] = rand();
        cout << vet[i] << '\n';
    }

    cout << "\n\n";

    for (int j = 9; j >= 0; j--){
        
        cout << vet[j] << '\n';
    }

return 0;

}
