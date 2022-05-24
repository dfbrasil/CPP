#include <iostream>
using namespace std;

int main() {

    int N, valor;
    cout << "Entre com um valor inteiro: \n";
    cin >> N;
    if (N>0) {
    valor = N;
    }
    else {
    valor = N * (-1);
    }
    cout << "O módulo de N é: " << valor << "\n\n";

    return 0;

}