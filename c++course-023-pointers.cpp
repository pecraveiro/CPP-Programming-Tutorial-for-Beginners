#include <iostream>

using namespace std;

int main()
{
    // Criação de variáveis
    int age = 20;
    double gpa = 2.7;
    string name = "Pedro";
    
    // Irá printar minha idade e onde essa variável está localizada na memória do computador
    cout << age << endl;
    cout << &age << endl;
    
    cout << gpa << endl;
    cout << &gpa << endl;
    
    cout << name << endl;
    cout << &name << endl;
    
    return 0;
}

// Pointers are basically just memory addresses.
// Cada variável que eu crio é armazenada na memória computador e para localizá-la é preciso dos ponteiros que indicam onde essa variável está. 
// Quando eu digito '&' na frente da variável, eu quero saber onde a variável está armazenada na memória do computador.
