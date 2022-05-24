#include <iostream>
using namespace std;

int main(){

    float eleitores, nulos, brancos, validos;

    cout << "\n\nQual o total de eleitores do município? \n\n";
    cin >> eleitores;
    cout << "\n\nQual a quantidade de votos brancos no pleito? \n\n";
    cin >> brancos;
    cout << "\n\nQual a quantidade de votos nulos no pleito? \n\n";
    cin >> nulos;

    validos = eleitores - nulos - brancos;

    cout << "\nO pleito obteve os seguintes reultados:\n";
    cout << "\nPorcentagem de votos VÁLIDOS: " << (validos/eleitores)*100 << "%\n\n";
    cout << "\nPorcentagem de votos BRANCOS: " << (brancos/eleitores)*100 << "%\n\n";
    cout << "\nPorcentagem de votos NULOS: " << (nulos/eleitores)*100 << "%\n\n";

return 0;
}