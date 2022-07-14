//ler 15 num saber se tem repetido e em qual posição
#include <iostream>
using namespace std;

int main(){

    int m, teste;
    bool igual = false;
    int vet[15];

    for (int i = 0; i < 15; i++){
        cout << "\nDigite um número pra inserir no vetor: ";
        cin >> m;
        vet[i] = m;
    }

    for (int l = 0; l < 14; l++){
        for(int c = l+1; c < 15; c++){

            if (vet[l] == vet[c]){
                igual = true;
            }
        }
    }

    if (igual == true){

        cout << "\nO vetor possui valores iguais!!\n";

        for (int la = 0; la < 14; la++){
            for(int ca = la+1; ca < 15; ca++){

                if (vet[la] == vet[ca]){
                cout << "\nO valor na posição " << la << " e " << ca << " são repetidos!\n";
                }
            }
        }
    }
    else{ 
        cout << "\nNão há valores repetidos!!\n";
    }

    return 0;
}