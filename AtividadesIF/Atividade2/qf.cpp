#include <iostream>
using namespace std;

int main (){

    int A, B ,C, maior, menor, medio;

    cout << "\nEntre com o primeiro valor: ";
    cin >> A;
    cout << "\nEntre com o segundo valor: ";
    cin >> B;
    cout << "\nEntre com o terceiro valor: ";
    cin >> C;

    if (((A < B) && (A < C)) && (B < C)) {

        menor = A;
        medio = B;
        maior = C;
    }

        else {

            if (((A < B) && (A < C)) && (C < B)) {

                menor = A;
                medio = C;
                maior = B;

            }

            else {

                if (((B < C) && (B < A)) && (A < C)) {

                    menor = B;
                    medio = A;
                    maior = C;
                }
            

                else{

                    if (((B < C) && (B < A)) && (C < A)) {

                        menor = B;
                        medio = C;
                        maior = A;
                    }
                

                        else {

                             if (((C < A) && (C < B)) && (A < B)){

                                 menor = C;
                                 medio = A;
                                 maior = B;

                            }

                                else{

                                    menor = C;
                                    medio = B;
                                    maior = A;

                                }

                        }
                }
            }   

        }

cout << "\nA ordem crescente dos números será: " << menor << "," << medio << "," << maior << "\n\n";

    return 0;

}