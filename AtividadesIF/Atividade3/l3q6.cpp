#include <iostream>
using namespace std;

int main(){

    int n = 1;
    while (n <= 200){
        if (n % 4 == 0){
           cout << n << " ";
        }
        n++;
    }
    cout << "\n";


return 0;

}