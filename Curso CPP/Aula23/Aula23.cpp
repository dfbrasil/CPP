#include <iostream>
using namespace std;

void soma(int n1, int n2);
void soma();

int main (){

    soma(25, 15);
    soma();
    
    return 0;

}

void soma(int n1, int n2){

    int re;

    re = n1 + n2;
    cout << "\nA soma de " << n1 << " com " << n2 << " = " << re << "\n\n";

}

void soma(){

    int n1, n2, re;
    n1= 10;
    n2 = 20;
    re = n1 + n2;

    cout << "\nA soma de " << n1 << " com " << n2 << " = " << re << "\n\n";

}