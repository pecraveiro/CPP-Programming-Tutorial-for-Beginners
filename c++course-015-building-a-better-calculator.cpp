#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declarando as variáveis

    int num1, num2;
    char op; // Operator
 
    // Getting user input
    cout << "Digite o primeiro número inteiro: ";
    // Getting user output
    cin >> num1;

    cout << "Digite o operador (multiplicação *, divisão /, soma +, subtração -): ";
    cin >> op;

    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    int result; // Variável do resultado

    if( op == '+') // Soma
    { 
        result = num1 + num2;
    }

    else if ( op == '-') // Subtração
    {
        result = num1 + num2;
    }

    else if ( op == '/') // Divisão
    {
        result = num1 / num2;
    }

    else if ( op == '*') // Multiplicação
    {
        result = num1 * num2;
    }

    else
    {
        cout << "Your operator is invalid. Please, change the operator.";
    }

    cout << "Seu resultado é: " << result; 

    return 0;
}