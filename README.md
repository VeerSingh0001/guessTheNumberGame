# Guess-the-number-game
This is a cli base Guess the number game . Which is written in C++ language.

#include <iostream>
#include <conio.h>
#include <ctime>
#include <random>
using namespace std;

int random(int low, int high)
{
    return low + rand() % (high - low + 1);
}

int main()
{
    int a, num;
    srand(time(NULL));
    random(1, 100);
    cout << "Welcome into Guess the number game!" << endl;
    do
    {
        cout << "Enter the number: ";
        cin >> num;
        if (num > random(1,100))
        {
            cout << "Enter a smaller number."<<endl;
        }
        else if (num < random(1,100))
        {
            cout << "Enter a bigger number."<<endl;
        }
        else
        {
            cout << "Congratulations you found the correct number.";
        }
    } while (num !=a);
    return 0;
}
