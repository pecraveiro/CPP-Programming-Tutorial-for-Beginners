#include <iostream>
#include <cmath>

using namespace std;

// Criando uma calculadora para números inteiros
int main()
{
    // Criando as variáveis
    int num1, num2;

    // Pegando a informação do usuário
    cout << "Enter first number: ";

    // Armazenando a informação
    cin >> num1;

    // Pegando a informação do usuário
    cout << "Enter second number: ";

    // Armazenando a informação
    cin >> num2;

    // Soma
    cout << "O resultado da soma é: ";
    cout << num1 + num2 << endl;

    // Subtração
    cout << "O resultado da subtração é: ";
    cout << num1 - num2 << endl;

    // Multiplicação
    cout << "O resultado da multiplicação é: ";
    cout << num1 * num2 << endl;
    
    // Divisão
    cout << "O resultado da divisão é: ";
    cout << num1 / num2 << endl;

    return 0;
}