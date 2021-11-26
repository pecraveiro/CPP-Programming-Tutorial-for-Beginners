#include <iostream>

using namespace std;

// Function stub ou Function signature
// C++ vai ler a função que está lá embaixo
void sayHi (string name, int age);

// Função principal
int main()
{  
    
    sayHi("Pedro!", 20); // string em parênteses, age em decimal
    sayHi("Maitê!", 19); // string em parênteses, age em decimal
    sayHi("Bebel!", 15); // string em parênteses, age em decimal
    sayHi("Victor!", 19); // string em parênteses, age em decimal

    return 0;
}

// Função ''secundária''
void sayHi(string name, int age) // 2 Tipos de informações / 2 Variáveis
{
    cout << "Hello " << name << "you're " << age << "years old." << endl;

}
