#include <iostream>
using namespace std;

int main(){

	float dividendo, divisor, quociente ,i;
	
	i = 1;
	
	cout << "\nDigite o dividendo: \n";
	cin >> dividendo;
	
	cout << "\nDigite o divisor: \n";
	cin >> divisor;
	
	while ((i*divisor) <= dividendo){
	    
	       i++; 
	    
	}
	
		cout <<"\nO divisor cabe " << i-1 << " vezes no dividendo.\n";
	
return 0;

}