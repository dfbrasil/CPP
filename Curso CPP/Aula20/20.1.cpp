#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char palavra[50], palavraDigitada[50], palavraFinal[50];
    int chance, tam, i, j, acerto;
    char letra;
    bool verificador;
    
    acerto=0;
    
    cout << "\nDigite uma palavra: ";
    cout << "\nApós ser digitada a tela será limpa!\n";

    cin >> palavra;
    tam =  strlen(palavra);

    system("clear||cls");

    cout << "\nQuantas chances de erro você quer ter? \n";
    cin >> chance;

    cout << "\nA palavra tem " << tam << " letras, boa sorte !\n\n";

    while ((chance > 0) && (acerto < tam)){
                
        cout << "\nDigite uma letra: ";
        cin >> letra;
        verificador = false;
       
        for (i = 0; i < tam; i++){

            if (palavra[i] == letra){
                acerto++;
                verificador = true;
                palavraDigitada[i] = letra;
                palavraFinal[i] = palavraDigitada[i];
            }
            
        }
        
        for (j = 0; j < tam; j++){
            if (palavraFinal[j]=='\0'){
                cout << "_";
            }
            else{
                cout << palavraFinal[j];
            }   
        }

    if (verificador == false){

        chance--;
        cout << "\n\nVocê tem: " << chance << " chances.";
    }
    }
    
    cout << "\n\nA palavra secreta é " << palavra << "\n\n";

return 0;

}