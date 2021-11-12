#include <iostream>

using namespace std;
// Para uma história simples, não precisamos criar variáveis para o nome do personagem, nem sua idade, ou sua profissão por exemplo...

/* int main()
{
    cout << "There once was a man named George!" << endl;
    cout << "He was 70 years old!" << endl;
    cout << "He liked the name George" << endl;
    cout << "But did not like being 70" << endl;
    return 0;
} */

// Todavia, se a história tivesse 200 linhas de código, e no futuro o cliente decide mudar o nome do personagem ou sua carreira, teriámos um problema mudando cada linha de código, nesse momento que nós utilizaremos as variáveis para facilitar nossa vida.

// Mudei linha por linha
/* int main()
{
    cout << "There once was a man named Pedro!" << endl;
    cout << "He was 20 years old!" << endl;
    cout << "He liked the name Pedro" << endl;
    cout << "But did not like being 20" << endl;
    return 0;
} */

// Criando variáveis

int main()
{
    string characterName = "Andrey";
    int characterAge = 21;

    cout << "There once was a man named "<< characterName << endl;
    cout << "He was " << characterAge  << " years old!" << endl;
    cout << "He liked the name Pedro" << characterName << endl;
    cout << "But did not like being 20" << characterAge<< endl;
    return 0;
} 

/* Observação importante 
    How C reads the code:
        top to bottom 
        left to right 
*/