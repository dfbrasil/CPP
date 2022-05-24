#include <iostream>
using namespace std;

int main() {

    float custoFinal, custoFabrica, distrib, impostos;

    cout << "\n\nEntre com o custo de fábrica do veículo: \n\n";
    cin >> custoFabrica;

    impostos = custoFabrica * 0.45;
    distrib = custoFabrica * 0.28;
    custoFinal = custoFabrica + impostos + distrib;

    cout << "\n\nO custo final ao consumidor será de: " << custoFinal << " Reais.\n\n";

    return 0;
}