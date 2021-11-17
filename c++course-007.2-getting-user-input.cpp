// Bibliotecas
#include <iostream>

using namespace std;

// Getting user input
int main()
{
    // Criando a variável
    string name;

    // Pedindo a informação para o usuário
    cout << "Enter your name: ";

    // Armazenando a informação
    getline(cin, name);

    // Retornando a informação para o usuário

    cout << "Hello " << name << " welcome to my Github!";

    return 0;
}

// Para pegar a informação que o usuário tem para dar precisamos armazená-la.
// Diferença entre cout & getline.
