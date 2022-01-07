#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter students count: ";
    cin >> n;
    double grades[n];
    double min, max, sum = 0, average;
    cout << "Enter " << n << " grades:\n";
    for (int index = 0; index < n; ++index)
    {
        cin >> grades[index];
    }
    min = grades[0];
    max = grades[0];
    for (int index = 0; index < n; ++index)
    {
        if (grades[index] > max)
        {
            max = grades[index];
        }
        if (grades[index] < min)
        {
            min = grades[index];
        }
        sum += grades[index];
    }
    average = sum / n;
    cout << "Min: " << min << '\n';
    cout << "Max: " << max << '\n';
    cout << "Average: " << average << '\n';
}