#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n>=1){

        cout << n << "\n";

        if (n%5==0){
            cout << "beep\n";
        }
    n--;
    }
    return 0;
}