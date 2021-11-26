#include <iostream>
using namespace std;

int main()
{
    
    bool isMale = true;
    bool isTall = true;

    if(isMale && isTall) // Vamos especificar 2 condições && = and operator
    {   
        cout << "You're a tall male.";
    }

    else if (isMale && !isTall) // ! negação is NOT Tall
    {
        cout << "You're a short male.";
    }

    else if (!isMale && isTall)
    {
        cout << "You're a tall female.";
    }

    else
    {
        cout << "You're not male and not tall.";
    }
    

    return 0;
}
