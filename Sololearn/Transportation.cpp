#include <iostream>
using namespace std;

int main(){

    int pass;
    int seats;

    cout << "\nHow many passengers waiting in the bus station? \n";
    cin >> pass;

    seats = 50 - (pass%50);

    cout << "\n" << seats;


    return 0;
}