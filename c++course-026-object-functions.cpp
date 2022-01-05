#include <iostream>
using namespace std;

class Student { // Class -  Template
    public:
        // Information
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa){ // Constructor
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }
        
        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }
};

int main() // Função principal
{
    Student student1 "Jim", "Business", 2.4);
    Student student2 "Pammela", "Art", 3.6);
    Student student3 "Angelo", "Engineer", 2.9);
    
    cout << student1.hasHonors();

    return 0;
}
