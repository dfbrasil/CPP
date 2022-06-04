#include <iostream>
using namespace std;


float* vetA(){

    float* a = new float[20];
    
    for(int i = 1; i <= 20; i++){
        cout << "\nDigite o " <<  i  << "º elemento do vetor A: ";
        cin >> a[i];
        
    }

    return a;
}

float* vetB(){

    float* b = new float[20];

    for(int i = 1; i <= 20; i++){
        
        cout << "\nDigite o " <<  i  << "º elemento do vetor B: ";
        cin >> b[i];
    }

    return b;
}

int main(){

    float* a = vetA();
    float* b = vetB();
    float c[20];

    for (int i = 1; i <= 20; i++){

        c[i] = a[i] - b[i];        
        cout << c[i] << "\n";

    }    

return 0;
}