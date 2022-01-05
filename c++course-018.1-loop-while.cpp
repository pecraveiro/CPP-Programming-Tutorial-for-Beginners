#include <iostream>

using namespace std;

int main()
{	
	// Declaração de variáveis
	int secretNum = 7;
	int guess;
	
	cout << "Welcome @user - Guessing Game 2.0" << endl;

	while (secretNum != guess)
	{
	
	cout << "Enter a guess between 0 and 50: ";
	cin >> guess;
		
	}

	cout << "You Won! You have discovered the magic number!";
	
	return 0;
}
