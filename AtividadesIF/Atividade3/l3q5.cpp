#include <iostream>
using namespace std;

int main(){

    int n = 0;
    while (n <= 20){
        if (n % 2 != 0){
           cout << n << " ";
        }
        n++;
    }
    cout << "\n";
    
    return 0;
}