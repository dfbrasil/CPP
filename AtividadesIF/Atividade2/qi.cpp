#include <iostream>
using namespace std;

int main() {

    int a, b, c, d, e, maior, menor;

    cout << "\nEntre com o valor de a: \n";
    cin >> a;
    cout << "\nEntre com o valor de b: \n";
    cin >> b;
    cout << "\nEntre com o valor de c: \n";
    cin >> c;
    cout << "\nEntre com o valor de d: \n";
    cin >> d;
    cout << "\nEntre com o valor de e: \n";
    cin >> e;

    if (a > b){
        maior = a;
        menor = b;
    }
    else{
        maior = b;
        menor = a;
    }

        if (c > maior){
            maior = c;
        }
        if (c < menor){
            menor = c;
        }
        if (d > maior){
            maior = d;
        }
        if (d < menor){
            menor = d;
        }
        if (e > maior){
            maior = e;
        }
        if (e < menor){
            menor = e;
        }

        cout << "\nO maior número é " << maior << " e o menor número é " << menor << "\n\n";

    return 0;


}