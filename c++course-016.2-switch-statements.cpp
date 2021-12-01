#include <iostream>
using namespace std;

// Function - Convert a number into the day of a week.

string getDayOfWeek(int dayNum) 
{

    string dayName;

    switch(dayNum){
    
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
        dayName = "O número que você escolheu é inválido.";
    }
    return dayName;
}

int main()
{

    cout << getDayOfWeek(4);

    return 0;
}

// Switch Statements 
// A switch statements is basically a special type of 'if statement', witch allow us to check one particular value against a bunch of other values.