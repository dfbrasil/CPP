#include <iostream>
using namespace std;

void imp(string txt="Padrão"){//passado valor padrão "Padrão"
    cout << "\n" << txt << "\n";
}

int main(){

    imp("Daniel"); // se vazio, passo o valor padrão.

    return 0;

}