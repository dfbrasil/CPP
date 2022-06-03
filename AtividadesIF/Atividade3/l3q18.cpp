#include <iostream>
using namespace std;

int main(){

	int n, maior, menor;
	
	cout << "\nDigite um número. \nDigite um número negativo para sair.\n";
	cin >> n;
	
	maior = n;
	menor = n;
	
	while (n >= 0){
	
		if (n > maior){
		
			maior = n;		
		}
		else if (n < menor){
		
			menor = n;
		}
		
		cout << "\nDigite um número. \nDigite um número negativo para sair.\n";
		cin >> n;
		
	}
	
	cout << "\nO maior número é: " << maior;
	cout << "\nO menor número é: " << menor <<"\n";
	

	return 0;
	
}