#include <iostream>
using namespace std;

int main(){

    int vet[10];
    int n,m;
    bool esta;
    
    for (int i = 0; i < 10; i++){
        cout << "\nDigite um número pra inserir no vetor: ";
        cin >> m;
        vet[i] = m;
    }
    
    cout << "\nDigite um número pra procurar: ";
    cin >> n;
    cout << "\n";

    for (int j = 0; j < 10; j++){

        if (n == vet[j]){
         esta = true;   
        };
    }

    if (esta == true){
        cout << "ACHEI!!" << "\n";
    }
    else{
        cout << "\nNÃO ACHEI!! "<< "\n";
    }

    return 0;

}