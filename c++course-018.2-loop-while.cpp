#include <iostream>

using namespace std;

// Limited Guessing Game

int main()
{	

	// Declaração de variáveis
	int secretNum = 7;
	int guess;
    int guessCount = 0;
    int guessLimit = 3; // Limite de tentativas
    bool outOfGuesses = false;
	
	cout << "Welcome @user - Guessing Game 2.0" << endl; // Bem-vindo

	while (secretNum != guess && !outOfGuesses) {
        if(guessCount < guessLimit) {
            cout << "Enter a guess between 0 and 50: ";
	        cin >> guess;
            guessCount++;
}	
        else {
            outOfGuesses = true;
        }
}
        if(outOfGuesses) {
            cout << "You run out of guesses. You lose!" << endl;
  }
  
        else {
  
	        cout << "You Won! You have discovered the magic number!";
  
	}
	
	return 0;
}
