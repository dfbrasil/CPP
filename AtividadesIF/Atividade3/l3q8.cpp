#include <iostream>
using namespace std;

int main(){

    int base, resultado;
    int pot;
    int cont = 0;

    cout << "\nDigite a base da potência: \n";
    cin >> base;
    cout << "\nDigite o expoente da potência: \n";
    cin >> pot;

    resultado = base;
    
    while (cont < (pot-1)){

        resultado = resultado * base;

        cont++;
    }

    cout << "\nO resultado de " << base << "^" << pot << " é: " << resultado << "\n";

return 0;

}