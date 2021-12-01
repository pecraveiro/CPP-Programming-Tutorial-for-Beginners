#include <iostream>
using namespace std;

// Function - Convert a number into the day of a week.

string getDayOfWeek(int dayNum) 
{

    string dayName;
    
        if(dayNum == 0)
        {
            dayName = "Sunday";
        }

        else if(dayNum == 1)
        {
            dayName = "Monday";
        }

        else if(dayNum == 2)
        {
            dayName = "Tuesday";
        }

        else if(dayNum == 3)
        {
            dayName = "Wednesday";
        }

        else if(dayNum == 4)
        {
            dayName = "Thursday";
        }

        else if(dayNum == 5)
        {
            dayName = "Friday";
        }

        else
        {
            dayName = "Saturday";
        }

    return dayName;
}

// 0 - Sunday
// 1 - Monday
// 2 - Tuesday
// 3 - Wenesday
// 4 - Thursday
// 5 - Friday
// 6 - Saturday

// 7 números, 7 dias da semana.

int main()
{
    cout << getDayOfWeek(2);

    return 0;
}

// Switch Statements 
// A switch statements is basically a special type of 'if statement', witch allow us to check one particular value against a bunch of other values.
