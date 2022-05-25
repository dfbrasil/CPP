#include <iostream>
using namespace std;

int main() {

    float N1, N2, N3, N4, MD;
    string res;

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

    MD = (N1 + N2 + N3 + N4)/4;

    (MD >=5) ? res = "Aprovado" : res = "Reprovado";

    cout << "O aluno foi " << res << "\n\n";

    cout << "A média do aluno foi " << MD << "\n\n";

return 0;

}