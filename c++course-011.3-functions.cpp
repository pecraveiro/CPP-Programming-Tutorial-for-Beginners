#include <iostream>

using namespace std;

// Function stub ou Function signature
// C++ vai ler a função que está lá embaixo
void sayHello (string name, int age);

// Função principal
int main()
{  
    
    sayHello("Pedro!", 20); // string em parênteses, age em decimal
    sayHello("Maitê!", 19); // string em parênteses, age em decimal
    sayHello("Bebel!", 15); // string em parênteses, age em decimal
    sayHello("Victor!", 19); // string em parênteses, age em decimal

    return 0;
}

// Função ''secundária''
void sayHello(string name, int age) // 2 Tipos de informações / 2 Variáveis
{
    cout << "Hello " << name << "you're " << age << "years old." << endl;

}
