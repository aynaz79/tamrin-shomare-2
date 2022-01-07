#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max = 6, min = 1;
    int diceNumber;
    while (true)
    {
        diceNumber = rand() % (max - min + 1) + min;
        if (diceNumber == 6)
        {
            cout << diceNumber << " And the bonus is ";
        }
        else
        {
            cout << diceNumber << '\n'
                 << "Done!";
            break;
        }
    }
}