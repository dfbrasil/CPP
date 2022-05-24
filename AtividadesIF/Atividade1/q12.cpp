#include <iostream>
using namespace std;

int main() {

    int nVeiculos;
    float totalVendas, salarioFixo, comissaoFixa, salarioFinal;
        
    cout << "\n\nQual a quantidade de veículos vendidos pelo funcionário? \n\n";
    cin >> nVeiculos;
    cout << "\n\nQual o valor total de suas vendas? \n\n";
    cin >> totalVendas;
    cout << "\n\nQual o seu salário fixo? \n\n";
    cin >> salarioFixo;
    cout << "\n\nQual a comissão fixa para cada carro vendido em R$? \n\n";
    cin >> comissaoFixa;
    
    salarioFinal = salarioFixo + (comissaoFixa*nVeiculos) + (totalVendas*0.05);

    cout << "\nO salário final do funcionaário vendedor será de: " << salarioFinal <<" Reais\n\n";

    return 0;
}
