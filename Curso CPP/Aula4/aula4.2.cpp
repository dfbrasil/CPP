#include<iostream>

using namespace std;

int main(){
	
	int vidas=0;
	char letra='d';
	double decimal=3.14567;
	float decimal2=3.14567;
	bool vivo=true;
	string nome="Daniel de Freitas Brasil";
	
	cout << "Digite a quantidade de vidas: ";
	cin >> vidas;
	cout << "\n";
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "\n";
	cout << "Digite um numero decimalcom (.): ";
	cin>>decimal;
	cout<<"\n";
	cout<<"Digite seu Nome do meio: ";
	cin>>nome;
	
	cout<<"\nVidas: "<<vidas<<"\nLetra: "<<letra<<"\nDecimal: "<<decimal<<"\nNome: "<<nome;
	
	
	
	return 0;
}