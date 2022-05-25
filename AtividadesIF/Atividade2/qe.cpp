#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float A, B, C, D, X1, X2, X;

    cout << "\nEntre com o valor de A:\n";
    cin >> A;
    cout << "\nEntre com o valor de B:\n";
    cin >> B;
    cout << "\nEntre com o valor de C:\n";
    cin >> C;

    if (((A != 0) and (B != 0)) and (C !=0 )){

        D = (pow(B,2)) - (4*A*C);
        cout << "\n\nO valor de Delta é: " << D;
        
        if (D < 0){
            
            cout << "\nEssa equação não possui raízes reais.\n";
            
        }

        else{

            if (D == 0) {

                X = ((-1) * B) / (2 * A);

                cout << "\nComo Delta é igual a ZERO, só existe uma única raiz real igual a: " << X << "\n\n";
                
            }

            else {

                X1 = (((-1) * B) + sqrt(D)) / (2 * A);
                X2 = (((-1) * B) - sqrt(D)) / (2 * A);

                cout << "\n\nAs raízes da equação são: " << X1 << " e " << X2 << "\n\n";

            }

        }

    }
    else {

        if (((A == 0) && (B != 0)) && (C != 0)){

            X = ((-1) * C) / B;

            cout << "\n\nA única raíz real será: " << X << "\n\n";

        }

        else{

            if (((B == 0) && (A != 0)) && (C != 0)) {

                if (C > 0){

                    cout << "\n\nEsta equação não possui raízes reais.\n\n";

                }

                else {

                    X1 = (sqrt(-C/A));
                    X2 = -(sqrt(-C/A));

                    cout << "\n\nAs raízes da equação são: " << X1 << " e " << X2 << "\n\n";

                }

            }

            else {

                if (((C == 0) && (A != 0)) && (B != 0)) {

                    X1 = 0;
                    X2 = -B/A;

                    cout << "\n\nAs raízes da equação são: " << X1 << " e " << X2 << "\n\n";

                }

                else{

                    if (((C != 0) && (A == 0)) && (B == 0)) {

                        cout << "\n\nEsta equação não possui raízes reais.\n\n";

                    }

                    else {

                        if (((A != 0) && (B == 0)) && (C == 0)) {

                            X = 0;
                            cout << "\n\nA única raíz real será: " << X << "\n\n";

                        }

                        else {

                            if (((B != 0) && (A == 0)) && (C == 0)){

                                X = 0;
                                cout << "\n\nA única raíz real será: " << X << "\n\n";

                            }

                            else {

                                cout << "\n\nEsta equação não possui raízes reais.\n\n";

                            }

                        }

                    }

                }

            }

        }

    }

    return 0;

}
