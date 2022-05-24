#include <iostream>
using namespace std;

int main (){

    float distKm, vel;
    int tempo;

    cout << "\n\nQual a distância percorrida pelo trajeto em quilômetros? \n";
    cin >> distKm;
    cout << "\n\nEm quantos minutos? ";
    cin >> tempo;

    vel = (distKm * 1000) / (tempo * 60);

    cout << "\n\nA velocidade do projétil foi de: " << vel << "m/s.\n\n";

    return 0;

}