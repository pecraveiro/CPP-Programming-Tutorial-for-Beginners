// Bibliotecas

#include <iostream>
#include <cmath> // Math functions

using namespace std;

// Basic math functions

int main()
{
    // pow ou elevado
    cout << pow(2, 5) << endl;
    cout << pow(3, 3) << endl;

    // sqrt ou raiz quadrada
    cout << sqrt(16) << endl;
    cout << sqrt(9) << endl;

    // round ou arredondamento
    cout << round(4.2) << endl;
    cout << round(4.4) << endl;
    cout << round(4.6) << endl;

    // ceil ou arredondamento direto para o maior número inteiro
    cout << ceil(4.1) << endl;
    cout << ceil(9.1) << endl;

    // floor ou arredondamento direto para o menor número inteiro
    cout << floor(4.7) << endl;
    cout << floor(2.8) << endl;

    // fmax - o computador diz qual número é o maior
    cout << fmax(2, 10) << endl;
    cout << fmax(6, 32) << endl;

    // fmin - o computador diz qual o número é o menor
    cout << fmin(3, 10) << endl;
    cout << fmin(6, 32) << endl;
    
    return 0;
}

// Pow: Elevado - (por ex: 2² = 4)