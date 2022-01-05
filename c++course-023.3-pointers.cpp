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
    
    cout << "AGE: " << *pAge << endl;
    cout << "Memory Address AGE: " << pAge << endl;
    cout << "GPA: " << *pGpa << endl;
    cout << "Memory Address GPA: " << pGpa << endl;
    cout << "NAME: " << *pName << endl;
    cout << "Memory Address NAME: " << pName << endl;
    
    return 0;
}

// Colocando o '*' na linha 17 eu estou 'dereferencing' o ponteiro e ao invés de mostrar onde ele está localizado na memória do computador ele
