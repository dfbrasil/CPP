#include <iostream>
using namespace std;

int main(){

    int n, i;
    cout << "\nDigite um valor para o cálculo da taboada: \n";
    cin >> n;
        for (i = 0; i <=10; i++)
        cout << n << " * " << i << " = " << n*i << "\n";
return 0;
}