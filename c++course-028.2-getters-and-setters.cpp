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
    
};

int main(){
    
    Chef chef;
    chef.makeChicken();
    
    ItalianChef italianChef;
    italianChef.makeChicken();
    
    
    return 0;
}

