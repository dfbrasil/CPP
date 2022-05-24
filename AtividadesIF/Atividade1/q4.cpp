#include <iostream>
using namespace std;

int main(){

	float tc, tf;
		
	cout << "\n\n Digite a temperatura em Fahrenheit:\n\n";
	cin >> tf;
	tc = (((tf-32)*5)/9);
	cout << "\n\n A conversão de " << tf << "°F em Celcius é: "<< tc << "°C\n\n";

	return 0;
}
