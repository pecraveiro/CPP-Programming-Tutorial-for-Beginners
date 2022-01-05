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
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++){
            cout << numberGrid[i] [j];
        }
        cout << endl;
    }
    return 0;
}

// int numberGrid[3][2] - 3 linhas e 2 colunas, é interessante especificar na variável
// I para lInhas 
// J para colunas
