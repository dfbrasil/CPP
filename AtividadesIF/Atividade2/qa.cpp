#include <iostream>
using namespace std;

int main(){

    int A, B, dif;
    cout << "Digite o valor do primeiro valor: ";
    cin >> A;
    cout << "Digite o valor do segundo valor: ";
    cin >> B;
    if (A > B){
    dif = A - B;
    }
    else {
    dif = B - A;
    }

    cout << "A diferença entre o maior e menor valores é: " << dif << "\n\n";
    return 0;
    
}