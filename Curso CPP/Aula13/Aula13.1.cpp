#include <iostream>
using namespace std;

int main(){

    int val;

    cout << "Selecione um transporte:\n";
    cout << "[1] = Carro, [2] = Moto, [3] = Avião, [4] = Helicóptero\n";
    cin >> val;

    switch (val){

    case 1:
    case 2:
        cout << "Transporte terrestre.\n";
        switch (val){
        case 1:
            cout << "Carro selecionado.\n";
            break;
        case 2:
            cout << "Moto selecionada.\n";
        default:
            break;
        }
        break;
    case 3:
    case 4:
        cout << "Transporte aéreo.\n";
        switch (val){
        case 3:
            cout << "Avião selecionado.\n";
            break;
        case 4:
            cout << "Helicóptero selecionado.\n";
        default:
            break;
        }
    default:
        cout << "Transporte selecionado inválido.";
        break;
    }

  return 0;  
}