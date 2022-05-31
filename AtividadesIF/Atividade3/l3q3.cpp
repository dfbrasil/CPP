#include <iostream>
using namespace std;

int main(){

    int soma = 0;
    int n = 1;
    while (n <=100){
        if (n < 100){
           cout << n << " + "; 
        }
        else{
            cout << n << " = "; 
        }
        
        soma = soma + n;
        n++;
        
    }

    cout << soma << "\n";
    
return 0;

}
