#include <iostream>
using namespace std;

int main(){
int ano;

cin >> ano;
if (ano%4 == 0){
    cout << "Ano bisexto\n";
}
else{
    cout << "Ano normal\n";
}

return 0;

}