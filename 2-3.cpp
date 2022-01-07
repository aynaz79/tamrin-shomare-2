#include <bits/stdc++.h>
using namespace std;

int main()
{
    int seconds, hours, minutes;
    cin >> seconds;
    minutes = (seconds / 60);
    hours = minutes / 60;
    minutes = minutes % 60;
    if (hours < 10)
    {
        cout << "0" << hours << ":";
    }
    else
    {
        cout << hours << ":";
    }
    if (minutes < 10)
    {
        cout << "0" << minutes << ":";
    }
    else
    {
        cout << minutes << ":";
    }
    if (seconds < 10)
    {
        cout << "0" << seconds;
    }
    else
    {
        cout << seconds % 60;
    }
}