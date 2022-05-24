#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float pi, r, v;

    pi = 3.14159;
    cout << "\n\nDigite o tamanho do raio em metros: \n\n";
    cin >> r;
    v = (4*pi*(pow(r,3)))/3;
    cout << "\n\nO volume de uma esfera de raio " << r << "m é: " << v << "m³ \n\n";

    return 0;
}