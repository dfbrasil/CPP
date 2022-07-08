#include <iostream>
using namespace std;

int main(){

    int a,b,soma,aux;
    aux = 0;
    soma = 0;

    cin >> a;
    cin >> b;
    soma = a+b;

    for (int i = 1; i <= soma; i++){
        if (soma%i == 0){
            aux++;
        }
    }
    if (aux>2){
        cout<<"\nNão gera primo\n";
    }
    else{
        cout<<"\nGera Primo\n";
    }
    return 0;
}







/*
Elabore um programa que recebe dois valores e verifica se a soma deles gera um número primo.
*/