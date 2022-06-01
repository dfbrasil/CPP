#include <iostream>
using namespace std;

int main(){
    
    int n = 1;
    int f;
    double soma;

    while (n <= 15){

        cout << "\nDigite o " << n << "° termo: ";
        cin >> f;
        int fat = 1;

        for(int i = 1; i <= f; i++){

            fat = fat * i;

        }

        soma = soma + fat;
        n++;    
    
    }       

    cout << "\nO somatório dos fatoriais é: " << soma << "\n\n";

return 0;

}