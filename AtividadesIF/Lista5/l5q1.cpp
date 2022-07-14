#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int vet[5];
    int aleatorio;
    srand((unsigned)time(0));

    for (int i = 0; i < 5; i++){
        
        vet[i] = rand();
        cout << vet[i] << '\n';

    }

}

//Faça um Programa que preencha um vetor de 5 números inteiros e mostre-os