#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    string input;
    while (true)
    {
        cin >> input;
        if (input == "exit")
        {
            break;
        }
        sum += stoi(input);
    }
    cout << sum;
}