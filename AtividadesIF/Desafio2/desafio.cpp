#include <iostream>
using namespace std;

int main(){

    int notas[20];
    int aprov[20];
    int reprov[20];
    int nota;
    int m = 0; 
    int n = 0;

    for (int i = 0; i < 5; i++){ //Mude o i até 20

       cout << "Digite nota: ";
       cin >> nota;
       notas[i] = nota;
    }

    for (int i = 0; i < 5; i++){ //Mude o i até 20

        if (notas[i]>=6){
            m = m + 1;
        }
        else{
            n = n + 1;
        }    
    }

    int j = 0;
    for(int i=0 ; i<5; i++){ //Mude o i até 20
        if(notas[i] >= 6){
            aprov[j] = notas[i];
            j++;
        }
    }

    int k = 0;
    for(int i=0 ; i<5; i++){ //Mude o i até 20
        if(notas[i] < 6){
            reprov[k] = notas[i];
            k++;
        }    
    }

    cout << "\n";

    for (int i = 0; i<m;i++){
        cout << aprov[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i<n;i++){
        cout << reprov[i] << " ";
    }
return 0;

}