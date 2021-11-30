#include <iostream>

using namespace std;

// Comparando 3 números

int getMax (int num1, int num2, int num3)
{
    int result;

    if(num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }

    else if(num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }

    else
    {
        result = num3;
    }
    
    return result;
}

int main()
{

    cout << getMax(2000, 53, 10); // Números escolhidos
    return 0;

}

// Regras
// != not equal/não é igual
// > Maior
// < Menor 
// == Igual/Comparando
// = assignment/atribuição
