#include <iostream>
using namespace std;

int main() {

    int A, B ,C, soma;

    cout << "\nEntre com o valor de A: \n";
    cin >> A;
    cout << "\nEntre com o valor de B: \n";
    cin >> B;
    cout << "\nEntre com o valor de C: \n";
    cin >> C;

    soma = A + B + C;
    
    if (soma >= 100){

        cout << "\n\nA soma dos valores foi: " << soma <<"\n\n";
    }
    
    return 0;


}