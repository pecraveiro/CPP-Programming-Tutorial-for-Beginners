#include <iostream>
using namespace std;

class Chef {
    public:
        void makeChicken () {
            cout << "The Chef makes chicken." << endl;
        }
        void makeSalad() {
            cout << "The Chef makes salad." << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes barbecue ribs." << endl;
        }
};

int main(){
    
    Chef chef;
    chef.makeChicken();
    
    return 0;
}
