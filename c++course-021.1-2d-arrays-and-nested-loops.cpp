#include <iostream>
using namespace std;

// 2D Arrays
int main()
{
    // Array de 2 dimensões
    int numberGrid[3][2] = {
        {1, 2}, // Primeiros elementos dentro de um 'arranjo'
        {3, 4}, // Segundos elementos dentro de um 'arranjo'
        {5, 6}  // Terceiros elementos dentro de um 'arranjo'
    }; 
    
    cout << numberGrid[0][0] << endl; // Corresponde ao número 1, ou seja, localizado na primeira linha e na primeira coluna;
    cout << numberGrid[0][1] << endl; // Corresponde ao número 2, ou seja, localizado na primeira linha e na segunda coluna;
    cout << numberGrid[1][0] << endl; // Corresponde ao número 3, ou seja, localizado na segunda linha e na primeira coluna; 
    cout << numberGrid[1][1] << endl; // Corresponde ao número 4, ou seja, localizado na segunda linha e na segunda coluna;
    cout << numberGrid[2][0] << endl; // Corresponde ao número 5, ou seja, localizado na terceira linha e na primeira coluna
    cout << numberGrid[2][1] << endl; // Corresponde ao número 6, ou seja, localizado na terceira linha e na segunda coluna.
    
    return 0;
}

// int numberGrid[3][2] - 3 linhas e 2 colunas, é interessante especificar na variável
