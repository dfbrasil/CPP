#include <iostream>
using namespace std;

int main() {

    int n, aux;

    cout << "\n\nDigite um número inteiro: ";
    cin >> n;
    aux = n;

    cout << "\n\nO antecessor de " << n << " é " << --aux << " e o sucessor de " << n << " é " << ++n <<"\n\n";

    return 0;

}
