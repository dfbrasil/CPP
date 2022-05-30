#include <iostream>
using namespace std;

int main(){

    int vetor[5];
    int i,j;

    for (i = 0; i < sizeof(vetor)/4; i++){
        
        cout << "Digite o valor do " << i+1 << "° termo\n";
        cin >> vetor[i];

    }

    for(j = 0; j < sizeof(vetor)/4; j++){

        cout << vetor[j] << "\n";
    }
        
return 0;

}