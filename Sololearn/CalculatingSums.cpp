#include <iostream>
#include <string>
using namespace std;

//complete the function
void add(int a, int b) {
    int sum = a+b;
    cout << sum << "\n";
    
}
//overload it to sum doubles
void add(double a, double b) {
    double sum = a+b;
    cout << sum << "\n";
}

int main() {
    
    //calling
    add(5,6);
    add(1.2, 6.5);
    
    return 0;
}
/*
Complete the add() function so that it will calculate the sum of two numbers given as arguments.
Overload it in order to do the same operation with double type values.
The calls of the functions are already written.
Don't forget about line breaks.

*/