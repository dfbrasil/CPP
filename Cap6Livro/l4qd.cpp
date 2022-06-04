#include <iostream>
using namespace std;


int* vetA(){

    int* a = new int[15];

    for(int i = 1; i <= 15; i++){
        cout << "\nDigite o " <<  i  << "º elemento do vetor A: ";
        cin >> a[i];
        
    }

    return a;
}

int* vetB(){

    int* b = new int[15];
    int* a = vetA();

    for(int i = 1; i <= 15; i++){

        b[i] = a[i] * a[i];
    }

    for(int i = 1; i <= 15; i++){

        cout << a[i] << "\n";
    }

    return b;

}

int main(){

    int* b = vetB();

    for (int i = 1; i <= 15; i++){
        
        cout << b[i] << "\n";

    }

return 0;
}
