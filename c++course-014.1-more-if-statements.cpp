#include <iostream>

using namespace std;

// Comparando 2 números

int getMax (int num1, int num2)
{
    int result;

    if(num1 > num2)
    {
        result = num1;
    }

    else
    {
        result = num2;
    }

    return result;
}

int main()
{

    cout << getMax(22, 5); // Números escolhidos
    return 0;
}

// Regras
// != not equal/não é igual
// > Maior
// < Menor 
// == Igual/Comparando
// = assignment/atribuição
