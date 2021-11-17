#include <iostream>

using namespace std;

int main()
{
    int WNum = 5;
    double DNum = 5.5;

    // Incremento
    WNum++;

    // Ordem de precedência
    cout << (4 + 5) * 10;
    
    // Ordem de precedência
    cout << 4 + 5 * 10;

    // Divisão com dois inteiros resulta em um resultado com números inteiros
    cout << 10 / 3;

    // Divisão com dois decimais resulta em um resultado com números decimais
    cout << 10.0 / 3.0;

    return 0;
}


// 2 tipos de números em C++ - Whole numbers / Decimal numbers
// Whole numbers - integers, números inteiros 
// Decimal numbers - float/double numbers, números flutuantes, números decimais
// Diferença entre Double e Float, basicamente, Double permite que números maiores 0.00000000000x.

// Adição: +, Subtração: -, Divisão: /, Multiplicação: *.
// 10 % 3 = 9 e sobra 1, a % é vai dividir o 10 por 3 e sobrará 1, logo o ''1'' é o resto. 
// % dará o valor do resto da divisão.