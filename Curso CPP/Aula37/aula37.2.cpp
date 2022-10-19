#include <iostream>

using namespace std;

int main() {

    int vetor[10];
    int *ponteiro;

for(int i=0;i<10;i++){
  ponteiro=&vetor[i];
  *ponteiro=i;
  cout << "Ponteiro: " << ponteiro << "  Valor: " << *ponteiro << endl;
 }

 return 0;

}