#include<iostream>
using namespace std;

class part { 
    private: 
        int modelNumber; 
        int partNumber; 
        float cost; 
    public: 
        void setpart(int mn, int pn, float co) {
            modelNumber = mn; 
            partNumber = pn; 
            cost = co; 
        }       
        void showdata() {
            cout << "model Number: " << modelNumber << endl; 
            cout << "part Number: " << partNumber << endl; 
            cout << "cost: " << cost << "$"<<endl; 
        }
}; 

int main() {
    part p; 
    p.setpart(434, 474, 45.75); 
    p.showdata(); 
return 0; 
}