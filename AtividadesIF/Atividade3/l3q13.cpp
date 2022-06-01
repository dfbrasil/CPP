#include <iostream>
using namespace std;

int main(){

    double soma;
    int i = 1;
    int media, n;

    while (i <= 10){

        cout << "\nDigite o " << i << "° termo: ";
        cin >> n;

        soma = soma + n;

        i++;

    }

    media = soma/10;

    cout << "\nSomatório: " << soma << " e Média: " << media << "\n";

return 0;

}