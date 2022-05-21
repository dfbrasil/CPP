#include <iostream>

using namespace std;


int n1,n2;//Variáveis Globais


int main(){
	
	//Operadores matemáticos: + - / * % ()	
	
	
	int n3,n4; //Variáveis locais
	int res1, res2;
	
	n1= 11;//variável global
	n2 = 3;//variável global
	n3 = 5;
	n4 = 2;
	
	res1=n1/n2;
	res2=n1%n2;
	cout << "Divisão: "<<res1<<"\n\n";
	cout << "Resto: "<<res2<<"\n\n";
	
	
	
		
	return 0;
}