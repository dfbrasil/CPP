#include <iostream>
using namespace std;


float* mult(){ //return type- address of float array

    float* a = new float; //array declared as float

    for (int i = 0; i < 8; i++){

        cout << "\nDigite um número: \n";
        cin >> a[i];

    }
    return a;
}

int main(){

    float* b = mult(); //pointer to hold address

    for (int j = 0; j < 8; j++){

        cout << b[j]*3 << "\n";
                
    }

    return 0;

}