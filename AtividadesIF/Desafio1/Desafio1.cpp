#include <iostream>
using namespace std;

int main(){

	int a, b, r, ca, cb, e;
	
	a = 4;
	b = 4;
	ca = 2;
	r = b;
	
	double fib = 0;
	double fibAA = 0;
	double fibA= 1;
	int i = 0;

	
	while (ca <= a){
	
			e = b;
			cb = 1;
		
			while(cb < ca){
			
				e = e*b;
				cb = cb + 1;				
			}
		
	r = r + e;
	ca = ca + 2;	
				
	}
	
	cout << r << "\n";
	
	while (i <= r){
	
		if (i == 0){
		
			cout << fibAA << " ";
		}
		if (i == 1){
			cout << fibA << " ";
		}
		
		else{
		
			fib = fibAA + fibA;
			cout << fib << " ";
			fibAA = fibA;
			fibA = fib;
				
		}
		
	i++;	
	
	} 
	
	return 0;
	
}
