#include <iostream>
using namespace std;

int main(){

    float c, l ,h, v;

    cout << "\n\nDigite o comprimento em metros:\n\n";
    cin >> c;
    cout << "\n\nDigite a largura em metros:\n\n";
    cin >> l;
    cout << "\n\nDigite a altura em metros:\n\n";
    cin >> h;
    v = c*l*h;
    cout << "\n\nO volume do paralelepípedo é: " << v << "m³\n\n";

    return 0;
}