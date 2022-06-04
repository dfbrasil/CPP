#include <iostream>
using namespace std;

int main(){

    float a[20];
    float b[20];
    float c[20];

    for (int i = 1; i <=20; i++){
        cout << "\nDigite o " <<  i  << "º elemento do vetor A: ";
        cin >> a[i];
        cout << "\nDigite o " <<  i  << "º elemento do vetor B: ";
        cin >> b[i];
    }
    for (int i = 1; i <=20; i++){

        c[i] = a[i] - b[i];
        cout << c[i] << "\n";

    }


return 0;
}