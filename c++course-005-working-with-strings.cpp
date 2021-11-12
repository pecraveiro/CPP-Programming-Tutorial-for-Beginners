#include <iostream>

using namespace std;

int main()
{
    cout << "Giraffe Academy" << endl;
    cout << "Hello" << endl;
    cout << "Hello! \n";

    //----------------------------------------

    string phrase = "Curso do Craveiro";
    cout << phrase << endl;

    //----------------------------------------

    // string phrase = "Curso do Craveiro";
    cout << phrase.length() << endl; // length() irá me dizer quantas letras eu tenho dentro dessa variável.

    //----------------------------------------

    // string phrase = "Curso do Craveiro";
    cout << phrase[0] << endl; // Acessa a letra na qual eu me refiro no código.
    cout << phrase[3] << endl; // Observação: a contagem começa em 0.
    cout << phrase[7] << endl;
    cout << phrase[12] << endl;

    //----------------------------------------

    // Você consegue modificar cada letra específica na frase.
    // string phrase = "Curso do Craveiro";
    phrase[0] = 'B'; 
    cout << phrase << endl;

    //----------------------------------------

    string phrase2 = "Craveiro's Cursos";
    
    cout << phrase2.find("Curso", 0) << endl;

    //----------------------------------------

    string phrase3 = "Craveiro's House";
    string phraseSUB;
    phraseSUB = phrase3.substr(0, 4);
    
    cout << phraseSUB << endl;

}


// endl - Significa que queremos printar em uma nova linha, o computador entende que o texto será escrito em uma nova linha.
// \n - Significa a mesma coisa.
