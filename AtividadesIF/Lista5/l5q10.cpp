#include <iostream>
using namespace std;

int main(){

    int m, n, cont;
    bool teste = true;
    int vet[20];

    for (int i = 0; i < 20; i++){
        cout << "\nDigite um número pra inserir no vetor: ";
        cin >> m;
        vet[i] = m;
    }

    while(teste){
    cont = 0;
    cout << "\nDigite um número pra procurar no vetor: ";
    cin >> n;

    for (int j = 0; j < 20; j++){
        
        if(vet[j] == n){
            cont++;
        }
    }

    if(cont == 0){
        teste = false;
    break;
    }

    }

return 0;
}    