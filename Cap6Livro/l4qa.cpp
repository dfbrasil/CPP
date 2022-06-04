#include <iostream>
using namespace std;

void nomes();

int main(){

    nomes();

    return 0;

}

void nomes(){

    string nome[50];

    for (int i = 0; i<10; i++){

        cout << "\nDigite um nome\n";
        getline (cin , nome[i]);
        
    }

    for (int j = 0; j < 10; j++){

        cout << "\n" << nome[j] << "\n\n";

    }

}