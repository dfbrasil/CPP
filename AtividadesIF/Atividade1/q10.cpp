#include <iostream>
using namespace std;

int main(){

    float salarioAtual, salarioAtualizado, reajuste;

    salarioAtualizado = 0;

    cout << "\n\nDigite o salário mensal atual do funcionário:\n\n";
    cin >> salarioAtual;
    cout << "\n\nQual o valor do reajuste em %: \n\n";
    cin >> reajuste;
    salarioAtualizado = salarioAtual + (salarioAtual*(reajuste/100));
    cout << "\n\nO novo salário atual mensal do funcionário será de: " << salarioAtualizado << " Reais.\n\n";

    return 0;
}