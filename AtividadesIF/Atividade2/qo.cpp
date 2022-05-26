#include <iostream>
using namespace std;

int main() {

    int n, res;

    cout << "\nEntre com o valor de n: \n";
    cin >> n;

    res = n * 2;

    if (res > 30){

        cout << "\n\nO resultado da multiplicação de " << n << " por 2 é: " << res <<"\n\n";
    }

    return 0;

}