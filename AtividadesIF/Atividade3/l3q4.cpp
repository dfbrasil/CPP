
#include <iostream>
using namespace std;

int main(){

    int soma = 0;
    int n = 1;
    while (n <=500){
        if ((n % 2 == 0) && (n < 500)){
           cout << n << " + "; 
        }
        else if ((n % 2 == 0) && (n == 500)){
            cout << n << " = "; 
        }
        
        soma = soma + n;
        n++;
        
    }

    cout << soma << "\n";


return 0;

}