#include <iostream>
using namespace std;

int main(){

    float N1, N2, N3, N4, NE, MD1, MD2;

    cout << "Digite a primeira nota do aluno:";
    cin >> N1;
    cout << "\n";
    cout << "Digite a segunda nota do aluno:";
    cin >> N2;
    cout << "\n";
    cout << "Digite a terceira nota do aluno:";
    cin >> N3;
    cout << "\n";
    cout << "Digite a quarta nota do aluno:";
    cin >> N4;
    cout << "\n";

    MD1 = (N1 + N2 + N3 + N4)/4;

    if (MD1 >= 7){
        cout << "\nAluno Aprovado!\n";
        cout << "\nA média do aluno foi: " << MD1;
    }
    else{
        cout << "\n\nDigite a Nota de Exame para o aluno:";
        cin >> NE;

        MD2 = (MD1 + NE)/2;

        if (MD2 >= 5){

        cout << "\n\nAluno Aprovado em Exame.\n\n";
        }
        else{
            cout << "\n\nAluno Reprovado\n\n";
        }
    }

    return 0;

}