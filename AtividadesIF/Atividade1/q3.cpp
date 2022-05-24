#include <iostream>
using namespace std;

int main(){

	float tc, tf;
	
	
	cout << "\n\nDigite a temperatura em °C: \n\n";
	cin >> tc;
	tf = ((9*tc)+160)/5;
	cout << "\n\nA conversão de " << tc << "°C em Fahrenheit é: "<< tf << "°F\n\n";  
		
	return 0;

}

