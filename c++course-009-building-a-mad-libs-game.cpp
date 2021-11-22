#include <iostream>
#include <cmath>

using namespace std;

// Mad Libs Game
int main ()
{
    // Criando variáveis
    string color, pluralNoun, celebrity;

    // Getting user input
    cout << "Enter a color: ";
    getline(cin, color);

    // Getting user input
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);

    // Getting user input
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    // Printing
    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;


    return 0;
}


// Mad Libs Game
// Para entender um pouco como funciona o Mad Libs: ''Mad Lib Theater with John Cena'' - https://www.youtube.com/watch?v=48pP0WFjuOE