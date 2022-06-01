#include <iostream>
using namespace std;

int main(){

    double soma;
    int i = 1;
    int j = 0;
    int media, n;

    while (i >= 0){

        cout << "\nDigite o " << i << "° termo: ";
        cin >> n;

        if (n < 0){
            break;
        }

        soma = soma + n;
        i++;
        j++;

    }

    media = soma/j;

    cout << "\nSomatório: " << soma << ", Média: " << media << " e total de números lidos: " << j << "\n\n";

return 0;

}