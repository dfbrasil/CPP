#include <iostream>
using namespace std;

int main() {

    int a, m ,d, tempo;

    cout << "\n\nEntre com a idade em anos, meses e dias:\n\n";

    cin >> a;
    cin >> m;
    cin >> d;

    while (m>12){
        cout << "\n\nDigite uma quantidade de meses válida\n\n";
        cin >> m;
    }

    while (d>30){
        cout << "\n\nDigite uma quantidade de dias válida\n\n";
        cin >> d;
    }

    tempo = (a*365)+(m*30)+d;

    cout << "\n\nA idade desta pessoas é de: " << a << " anos " << m << " meses e " << d << " dias.\n";
    cout << "\n\nA idade desta pessoa equivale a " << tempo << " dias.\n\n";

    return 0;

}