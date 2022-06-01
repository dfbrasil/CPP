#include <iostream>
using namespace std;

int main(){

    int i = 50;
    int soma = 0;
    int media = 0;
    int j;

    while (i <= 70){

        if (i%2 == 0){
            
            soma = soma + i;
            j++;

        }
    i++;    
    
    }

    media = soma/j;

    cout << "\nA soma é: " << soma << " e a média é: " << media << "\n\n";

return 0;

}