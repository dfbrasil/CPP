#include <iostream>

using namespace std;

int main() {

    string compartimento[30];
    float a[30], c[30], l[30];
    int i = 0;
    char resp = 's';
    float areaTotal = 0;
    
    cout << "\nDeseja inserir um novo cômodo? (S/N)\n";
    cin >> resp;

    while ((resp != 'N') && (resp != 'n') ){

        cout << "\nQual? \n";
        cin.ignore(); // <-- consumir aqui antes do getline
        getline(cin,compartimento[i]);
        
        
        cout << "\nQuantos metros de comprimento? ";
        cin >> c[i];

        cout << "\nQuantos metros de largura? ";
        cin >> l[i];

        a[i] = c[i] * l[i];

        areaTotal = areaTotal + a[i];

        i++;

        cout << "\nDeseja inserir um novo cômodo? (S/N)\n";
        cin >> resp; 
     
    }

    for (int j = 0; j < i; j++){
        cout << "\nO compartimento " << compartimento[j] << " tem " << a[j] << " m².\n";
    }
    cout << "\nA área total é de " << areaTotal << " m².\n\n";
return 0;

}