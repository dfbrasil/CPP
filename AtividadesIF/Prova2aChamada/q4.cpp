#include <iostream>
using namespace std;

int main(){
    
    float v,r;

    cin >> v;

    for (int i=0; i < 12; i++){
        v = v * 1.007;

    }
    cout << "\n" << v << "\n";
    
    return 0;
}


/*
Faça um programa que receba um valor que foi depositado e exiba o valor com rendimento 
após 12 meses.
Considere fixo o juro da poupança em 0,70% a. m. (rendimento ao mês)
*/