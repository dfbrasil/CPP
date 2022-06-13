#include <iostream>
using namespace std;

int main() {
    int ages[5];
    double disc, vlr;

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }

    int min = ages[0];

    for (int j = 0; j < 5 ; j++){
        if (ages[j]<=min) {
            min = ages[j];
        }
    }
    
    disc = min*0.5;
    vlr = 50 - disc;
    cout<< vlr;


    return 0;
}