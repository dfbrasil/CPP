#include <iostream>
using namespace std;

void contador(int num, int cont=0){

    cout << cont << "\n";
    
    if(num > cont){
        contador(num , ++cont);
    }
}

int main(){

    contador(20);

return 0;

}