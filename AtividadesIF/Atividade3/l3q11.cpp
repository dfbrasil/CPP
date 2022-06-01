#include <iostream>
using namespace std;

int main(){

    double grao = 1;
    int n = 1;
    double soma = 0;

    while (n <= 64){

        soma = soma + grao;
        grao = grao*2;
        n++;

    }

    cout << soma <<" grãos de trigo.\n";

return 0;

}