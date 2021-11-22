#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int luckyNums[] = {4, 8, 15, 23, 42, 69};

    cout << luckyNums[0] << endl;
    cout << luckyNums[1] << endl;
    cout << luckyNums[2] << endl;
    cout << luckyNums[3] << endl;
    cout << luckyNums[4] << endl;
    cout << luckyNums[5] << endl;
    cout << luckyNums[6] << endl;

    luckyNums[0] = 420; // Modificando um número que está no Array;
    
    cout << luckyNums[0] << endl; // Verificando se esse número foi trocado

    return 0;
}

// Arrays - Can hold multiple data values.
// {4, 8, 15, 23, 42, 69}
//  0  1   2   3   4   5 - Elementos, sempre começa com 0.
