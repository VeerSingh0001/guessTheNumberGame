#include <iostream>
#include <conio.h>
#include <ctime>
#include <random>
using namespace std;

int random(int low, int high)
{
    int randNum =  low + rand() % (high - low + 1);
    return randNum;
}

int main()
{
    int num, randNum;
    int tries = 1;
    srand(time(NULL));
    randNum = random(1, 100);
    cout << "Welcome into Guess the number game!" << endl<<endl;
    do
    {
        cout << "Enter the number between 1 to 100: ";
        cin >> num;
        if (num > randNum)
        {
            cout << "Enter a smaller number." << endl;
            tries++;
        }
        else if (num < randNum)
        {
            cout << "Enter a bigger number." << endl;
            tries++;
        }
        else
        {
            cout << "Congratulations you found the correct number in "<<tries<<" tries";
            break;
        }
    } while (num != randNum);
    return 0;
}
