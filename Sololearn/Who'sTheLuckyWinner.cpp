#include <iostream>
#include <string>
using namespace std;

//complete the function
void winners(string cust[], int size, int sort) {
    bool test=true;
    int i = sort;

    while (i<size){

        if (sort<size){
            cout << cust[i-1] << "\n";
            i = i + sort;
        }
        else{
            
            break;
        }
    }
}

int main() {

    string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};

    //getting the lucky number as input
    int n;
    cin >> n;
    //call function
    winners(customers, 13, n);
    
    return 0;
}

/*

A local supermarket is running a promotion: each Nth customer will receive one item for free. 
Customers names are sequentially given as array of strings (see template).
Write a function that receives the array of customers, its size, and the N number as arguments, 
and prints the names of the lucky customers each in a new line.

Sample Input
3

Sample output
Rayan
Bruce
Richard
Mary
Remember to pass the size of the array as argument to the function.

*/