#include <iostream>

using namespace std;

int main() {

    string veiculo = "Carro";

    string *pv;

    pv = &veiculo; //ponteiro PV recebe o endereço da variável veículo

    cout << veiculo << "\n";

    cout << pv << "\n";

    cout << &veiculo << "\n";

    *pv = "Moto" ; // No endereço apontado por *PV adiciono o valor moto

    cout << veiculo << "\n";

    cout << *pv << "\n";

    

    return 0;
}