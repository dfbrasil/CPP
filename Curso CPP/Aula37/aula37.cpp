#include <iostream>

using namespace std;

int main() {

    int *p;
    int vetor[10];

    p = vetor; // ou p = &vetor[0]

    cout << "\n" << p << "\n"; //imprime o primeiro elemento do ponteiro

    p = vetor; // ou p = &vetor[1]

    // ou *(p++)
    cout << "\n" << p + 1 << "\n"; //imprime o primeiro elemento do ponteiro

     p = vetor; // ou p = &vetor[2]
    // ou *(p++)
    cout << "\n" << p + 2 << "\n"; //imprime o primeiro elemento do ponteiro





    return 0;
}