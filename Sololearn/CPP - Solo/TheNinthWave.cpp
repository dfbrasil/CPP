#include <iostream>
#include <string>
using namespace std;

class Painting {
    public:
        //define the constructor
        Painting(string nm) {
            setName(nm);
            cout << nm;
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    private:
        string name;
        
};
int main() {
    string name;
    cin >> name;

    Painting painting(name);

    return 0;
}

/*
Constructors

The given program defines a Painting class and creates an object using the constructor.
Fix the code so that the constructor takes the name as the argument and outputs it.

Sample Input
Ocean

Sample Output
Ocean
The constructor should take one string as the argument and output it.
*/