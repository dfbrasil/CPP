#include <iostream>
using namespace std;

int main(){

    int a, b ,c ,d;
    cout << "\nEntre com o valor de a: \n";
    cin >> a;
    cout << "\nEntre com o valor de b: \n";
    cin >> b;
    cout << "\nEntre com o valor de c: \n";
    cin >> c;
    cout << "\nEntre com o valor de d: \n\n";
    cin >> d;
        if ((a % 2 == 0) && (a % 3 ==0)){
        cout << "\n" << a << " é divisível por 2 e 3\n\n";
        }
        if ((b % 2 == 0) && (b % 3 ==0)){
        cout << "\n" << b << " é divisível por 2 e 3\n\n";
        }
        if ((c % 2 == 0) && (c % 3 ==0)){
        cout << "\n" << c << " é divisível por 2 e 3\n\n";
        }
        if ((d % 2 == 0) && (d % 3 ==0)){
        cout << "\n" << d << " é divisível por 2 e 3\n\n";
        }
    return 0;

}