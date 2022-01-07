#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int numbers[n];
    int f1 = 1, f2 = 1, f3 = 2;

    for (int index = 1; index <= n; ++index)
    {
        if (index == 1)
        {
            numbers[index - 1] = f1;
            continue;
        }
        if (index == 2)
        {
            numbers[index - 1] = f2;
            continue;
        }
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        numbers[index - 1] = f3;
    }
    int index;
    for (index = 0; index < n - 1; ++index)
    {
        cout << numbers[index] << ',';
    }
    cout << numbers[index];
}