#include <iostream>
using namespace std;

void texto();
void soma(int n1, int n2);
int soma2(int n1,int n2);
void tr(string tra[4]);

int main (){

    int res;
    string transp[4] = {"carro", "moto", "barco","avião"};

    soma(7,13);
    
    res = soma2 (175, 25);

    cout << "\nValor de res: " << res << "\n\n";

    tr(transp);

return 0;

}

void texto(){

    cout <<"\nDaniel de Freitas Brasil\n";

}

void soma(int n1, int n2){

    cout << "\nsoma dos valores" << n1+n2 <<"\n";

}

int soma2(int n1,int n2){

    return n1 + n2;

}

void tr(string tra[4]){

    for (int i = 0; i < 4; i++){
        cout << "\n" << tra[i] << "\n";
    }

}