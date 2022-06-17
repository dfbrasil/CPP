#include <iostream>
using namespace std;

/*complete the function to multiple the megabytes,
  don't forget to set the parameter*/
void promotion(int mega) {
    
    //taking multiplier as input
    int multiplier;
    cin>>multiplier;
    mega = multiplier * mega;
    cout << "After the promotion: " << mega << endl;
    
    
}

int main() {
    //getting initial count of megabytes
    int megabytes;
    cin >> megabytes;
    
    //printing the count of megabytes before the promotion
    cout << "Before the promotion: " << megabytes << endl;
    
    //complete the function call
    promotion(megabytes);
    
    //printing the count of megabytes after the promotion
    
    
    return 0;
}
/*
You operate a mobile provider running a promotion that multiplies a user's internet bandwidth.
Fix the program by completing the function and calling it, so that the given megabyte outputs 
before and after the promotion work correctly.
The multiplier is taken as input inside the multiplier function.

Sample Input
5
2

Sample Output
Before the promotion: 5
After the promotion: 10

Explanation
The first input is the count of megabytes, the second is multiplier.
The first outputted line represents the count of megabytes before the function-multiplier call, 
and the second one - after.
Use address-of operator & in function call.
*/