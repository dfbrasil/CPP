//Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num vetor a
//média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0.
#include <iostream>
using namespace std;

int main(){

    float bim1[10], bim2[10], bim3[10], bim4[10], som[10], med[10];
    float nota;
    int cont = 0;

    for (int i = 1; i <= 10; i++){
        
        cout << "\nDigite a nota do " << i << "º aluno do primeiro bimestre: ";
        cin >> nota;
        bim1[i] = nota;
        cout << "\nDigite a nota do " << i << " º aluno do segundo bimestre: ";
        cin >> nota;
        bim2[i] = nota;
        cout << "\nDigite a nota do " << i << " º aluno do terceiro bimestre: ";
        cin >> nota;
        bim3[i] = nota;
        cout << "\nDigite a nota do " << i << " º aluno do quarto bimestre: ";
        cin >> nota;
        bim4[i] = nota;

    }

    // indice é o aluno
    
    for (int j = 1; j <= 10; j++){

        som[j] = bim1[j] + bim2[j] + bim3[j] + bim4[j];

    }

    for (int k = 1; k <= 10; k++){

        med[k] = som[k]/4;

    }

    for (int l = 1; l <= 10; l++){

        cout.precision(3);
        cout << "\nA média do aluno" << l << " foi de: " << med[l];

        if (med[l] >= 7){
            cont++;
        }

    }

    cout << "\n\nA quantidade de aluns acima da média foi de: " << cont << "\n\n";

return 0;

}