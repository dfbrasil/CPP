#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int reversedNumber = 0, remainder;
    int aux = x;

    while(x != 0) {

    remainder = x % 10;
    reversedNumber = reversedNumber * 10 + remainder;
    x /= 10;

    }

    if (aux == reversedNumber){
        return true;
    }
    else{
        return false;
    }

}

int main() {
    int n;
    cin >>n;

    isPalindrome(n);
    

    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }

  
    return 0;
}

/*
A palindromic number is a number (such as 626) that remains the same when its digits are reversed.
Write a function that returns true if a given number is a palindrome, and false, if it is not.
Complete the given function, so that the code in main works and results in the expected output.

Sample Input:
13431

Sample Output:
13431 is a palindrome
To check if a number is palindrome, you need to reverse it and compare with the original one.
*/