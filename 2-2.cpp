#include <bits/stdc++.h>
using namespace std;

int main()
{
    char input[10];
    int parts[3];
    int counter = 0;
    cin >> input;
    char *token = strtok(input, ":");
    while (token != NULL)
    {
        parts[counter++] = stoi(token);
        token = strtok(NULL, ":");
    }
    int seconds = parts[0] * 3600 + parts[1] * 60 + parts[2];
    cout << seconds;
}