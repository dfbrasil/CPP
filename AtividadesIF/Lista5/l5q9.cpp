#include <iostream>
using namespace std;

int main(){

    int m, n, cont;
    cont = 0;
    int vet[20];

    for (int i = 0; i < 20; i++){
        cout << "\nDigite um número pra inserir no vetor: ";
        cin >> m;
        vet[i] = m;
    }

    cout << "\nDigite um número pra procurar no vetor: ";
    cin >> n;

    for (int j = 0; j < 20; j++){
        
        if(vet[j] == n){
            cont++;
        }
    }

    if (cont == 1){
        cout << "\nO número " << n << " aparece uma vez" << cont << " vezes!\n\n";
    }
    if (cont >1){
        cout << "\nO número " << n << " aparece " << cont << " vezes!\n\n";
    }
    if (cont ==0){
        cout << "\nO número " << n << " não aparece !!!\n\n";
    }
    return 0;

}