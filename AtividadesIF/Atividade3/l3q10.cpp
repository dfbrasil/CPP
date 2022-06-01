#include <iostream>
using namespace std;

int main(){

   int f;
   int c = 10;

   while (c <= 100){

       f = (((9*c)+160) / 5);
       cout << c <<"° Celcius equivalem a " << f << "° Fahrenheit\n";
       c = c + 10;

   }

return 0;

}