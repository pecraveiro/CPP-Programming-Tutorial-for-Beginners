#include <iostream>
using namespace std;

class Chef {
    public:
        void makeChicken () {
            cout << "The Chef makes yummy chicken." << endl;
        }
        void makeSalad() {
            cout << "The Chef makes salad." << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes barbecue ribs." << endl;
        }
};

// Herança
class ItalianChef : public Chef{
    public:
    void makePasta() {
        cout << "The chef makes pasta." << endl;
    }
};

int main(){
    
    Chef chef;
    chef.makeChicken();
    
    ItalianChef italianChef;
    italianChef.makePasta();
    
    
    return 0;
}

