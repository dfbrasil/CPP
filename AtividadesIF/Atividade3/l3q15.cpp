#include <iostream>
using namespace std;

int main(){

    int n = 1;
    int fat;

    for (int j = 1; j <= 10; j++){

        fat = 1;

        if (j%2 != 0){

            for (int i = 1; i <= j; i++){

                fat = fat * i;
            }

            cout <<"\nO fatorial de "<< j << " é " << fat << "\n";

        }

    }

return 0;

}