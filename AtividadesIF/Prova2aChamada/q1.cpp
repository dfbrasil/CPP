//Digite cinco valores e descubra qual número é o terceiro maior.
#include <iostream>
using namespace std;

int main(){
    int n, med, min, max;
    int num[5];
    int aux[5];

    for (int i = 0; i < 5; i++){
        cout << "Digite um número: ";
        cin >> n;
        num[i] = n;
    }

    med = num[0];
    max = num[0];
    min = num[0];

    for (int i = 0; i < 5; i++){

        if (num[i] <= min){
            min = num[i];
            
        }
    }

    for (int i = 0; i < 5; i++){

        if(num[i] >= max){
            max = num[i];
            
        }
    }

    for (int i = 0; i <5; i++){
        if ((num[i]== max) or (num[i]== min)){
            aux[i] = 0;
        }
        else{
            aux[i] = num[i];
        }    
    }
    for (int i = 0; i <5; i++){
        cout << (aux[i]);
        cout << ("\n");
    }

    med = aux[0];
    max = aux[0];
    min = aux[0];

    for (int i = 0; i < 5; i++){

        if ((aux[i] <= min) and (aux[i] != 0)){
            min = aux[i];
            
        }
    }

    for (int i = 0; i < 5; i++){

        if(aux[i] >= max){
            max = aux[i];
            
        }
    }

    for (int i = 0; i < 5; i++){
        if ((aux[i]>min) and (aux[i]<max)){
            med = aux[i];
        }

    }

    cout << min;
    cout << "\n";
    cout << max;
    cout << "\n";
    cout << med;

return 0;

}