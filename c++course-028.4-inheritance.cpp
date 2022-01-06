#include <iostream>
using namespace std;

class Chef {
    public:
        void makeChicken () { // Super class
            cout << "The Chef makes yummy chicken." << endl;
        }
        void makeSalad() {
            cout << "The Chef makes salad." << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes barbecue ribs." << endl; // Diferente
        }
};

// Herança
class ItalianChef : public Chef{ // Sub class
    public:
    void makePasta() {
        cout << "The chef makes pasta." << endl;
    }
    void makeSpecialDish(){
        cout << "The chef makes chicken parm." << endl; // Diferente
    }    
    
};

int main(){
    
    Chef chef;
    chef.makeSpecialDish();
    
    ItalianChef italianChef;
    italianChef.makeSpecialDish();
    
    
    return 0;
}

