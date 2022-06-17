#include <iostream>
using namespace std;

int main() {
    
    double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};
    double itens[12];
    int disc;
    cin >> disc;
    for (int i = 0; i < 12; i++){

        itens[i] = items[i] - (items[i]*disc/100);
        

    }

    for (int j = 0; j < 12; j++){

        cout << itens[j]<< " ";
    }
    
    return 0;
}