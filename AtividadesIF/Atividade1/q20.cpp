#include <iostream>
using namespace std;

int main() {

    float a, b, soma, sub, mult, div;

    cout << "\n\nDigite o valor de A: ";
    cin >> a;
    cout << "\n\nDigite o valor de B: ";
    cin >> b;

    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a/b;

    cout << "\n\nO resultado da soma entre os valores " << a << " e " << b << " é: " << soma <<"\n\n";
    cout << "\nO resultado da subtração entre os valores " << a << " e " << b << " é: " << sub <<"\n\n";
    cout << "\nO resultado da multiplicação entre os valores " << a << " e " << b << " é: " << mult <<"\n\n";
    cout << "\nO resultado da divisão entre os valores " << a << " e " << b << " é: " << div <<"\n\n";

    return 0;

}