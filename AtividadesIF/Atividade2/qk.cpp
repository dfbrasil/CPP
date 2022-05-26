#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "\nDigite um valor inteiro: ";
    cin >> n;

    if ((n >= 1) && (n <= 9)){
        cout << "\nO valor está na faixa permitida.\n\n";
    }

    else{
        cout << "\nO valor está fora da faixa permitida.\n\n";
    }

    return 0;

}