#include <iostream>

using namespace std;

void sayHello(string name, int age) // 2 Tipos de informações / 2 Variáveis
{
    cout << "Hello " << name << "you're " << age << "years old." << endl;

}

int main()
{  
    
    sayHello("Pedro!", 20); // string em parênteses, age em decimal
    sayHello("Maitê!", 19); // string em parênteses, age em decimal
    sayHello("Bebel!", 15); // string em parênteses, age em decimal
    sayHello("Victor!", 19); // string em parênteses, age em decimal

    return 0;
}

// The parameter is referred to as the variables that are defined during a function declaration or definition. These variables are used to receive the arguments that are passed during a function call. 
// These parameters within the function prototype are used during the execution of the function for which it is defined.