#include <iostream>

using namespace std;

int main (){

    float graus = 0;

    while (graus<=360){
        cout << "\n" << graus << "° =  " << (graus*0.0174533) << "radianos\n";
        graus++;
    }
    return 0;

}
