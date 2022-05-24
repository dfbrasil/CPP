#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float x1, x2, y1, y2, d;

    cout << "\n\nEntre com o valor de x1: \n\n";
    cin >> x1;
    cout << "\n\nEntre com o valor de x2: \n\n";
    cin >> x2;
    cout << "\n\nEntre com o valor de y1: \n\n";
    cin >> y1;
    cout << "\n\nEntre com o valor de y2: \n\n";
    cin >> y2;

    d = sqrt( (pow((x2-x1),2)) + (pow( (y2-y1),2) ) );

    cout << "\n\nA distância entre os pontos: " << x1 << "," << x2 << " e " << y1 << "," << y2 << " é: " << d << "\n\n";

    return 0;

}