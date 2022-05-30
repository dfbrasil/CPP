#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char palavra[50], palavraDigitada[50], palavraFinal[50];
    int chance, tam, i, j;
    char letra;

    cout << "\nDigite uma palavra: ";
    cout << "\nApós ser digitada a tela será limpa!\n";

    cin >> palavra;
    tam =  strlen(palavra);

    system("clear||cls");

    cout << "\nQuantas chances de erro você quer ter? \n";
    cin >> chance;

    cout << "\nA palavra tem " << tam << " letras, boa sorte !\n\n";

    while (palavraFinal != palavra) {

                
        cout << "\nDigite uma letra: ";
        cin >> letra;

        for (i = 0; i < tam; i++){

            if (palavra[i] == letra){

                palavraDigitada[i] = letra;
                
            }
            else{

                palavraDigitada[i] = '_';
                
            }

            if (palavraDigitada[i] != '_'){

                palavraFinal[i] = palavraDigitada[i];

            }
            
        }
        
        for (j=0; j<tam; j++){
        
            if (palavraFinal[j] == '\0') {
                cout << "_";
            }


            else{
                cout << palavraFinal[j];
            } 

        }

    
    cout << "\nAgora você tem " << chance << " chances";
    if (chance==0){
        break;
    }
            
    }
    
return 0;

}