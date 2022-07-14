//Faça um Programa que leia 4 notas, mostre as notas e a média na tela.

#include <iostream>
using namespace std;


int main(){

    float vet[4];
    float nota, soma, media;

    for (int i = 1; i < 5; i++){

        cout << "\nDigite a " << i << "ª " << "nota: ";
        cin >> nota;
        vet[i] = nota; 
    }

    for (int j = 1; j < 5; j++){

        soma = soma + vet[j];

    }

    cout << "\na média das notas ";

    for (int z = 1; z < 5; z++){

        cout << vet[z] << " , ";

    }

    cout << " é: ";
    media = soma/4;
    cout.precision(3);
    cout << media << "\n\n";

return 0;
}