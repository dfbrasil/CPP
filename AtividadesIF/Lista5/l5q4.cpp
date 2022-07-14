//Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu
//respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.
#include <iostream>
using namespace std;

int main(){

    int id[5];
    float alt[5];
    int idade;
    float altura;

    for (int i = 0; i < 5; i++){

        cout << "\nDigite sua idade: ";
        cin >> idade;
        id[i] = idade;
        cout << "\nDigite sua altura: ";
        cin >> altura;
        alt[i] = altura;
    }

    for (int j = 4; j >= 0;j--){

        cout << "\nIdade: " << id[j] << " , " << "altura: " << alt[j] << "\n\n";
    }

    return 0;

}