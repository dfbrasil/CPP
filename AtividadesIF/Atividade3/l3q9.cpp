#include <iostream>
using namespace std;

int main(){

    int cont = 0;
    int fibAA = 0;
    int fibA = 1;
    int fib = 0;    

    while (cont <= 15){

        if (cont == 0){
            cout << fibAA << " ";
        }
        if (cont == 1){
            cout << fibA << " ";
            
        }
        else{            
            
            fib = fibAA + fibA;            
            cout << fib << " ";
            fibAA = fibA;
            fibA = fib;            

        }  
    cont++;
            
    }

return 0;

}
