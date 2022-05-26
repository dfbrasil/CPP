#include <iostream>
using namespace std;

int main (){

    string nome;
    char s;

    cout << "\nDigite o nome da pessoa\n\n";
    getline (cin, nome);
    cout << "\nDigite o sexo da pessoa:(M/F)\n\n";
    cin >> s;

   
        if ((s == 'M') || (s == 'm')){
            cout << "\nIlmo. Sr. " << nome << "\n\n";
        }
        else{
            if ((s == 'F') || (s == 'f')){
            cout << "\nIlma. Sra. " << nome << "\n\n";
            }

            else{
            cout << "\nSexo informado inválido.\n\n";
            }
        }

    return 0;

}