#include <iostream>

using namespace std;

int main()
{
    // Criação de variáveis
    int age = 20;
    int *pAge = &age;
    
    double gpa = 2.7;
    double *pGpa = &gpa;
    
    string name = "Pedro";
    string *pName = &name;
    
    cout << "Memory Address AGE: " << pAge << endl;
    cout << "Memory Address GPA: " << pGpa << endl;
    cout << "Memory Address NAME: " << pName << endl;
    
    return 0;
}
