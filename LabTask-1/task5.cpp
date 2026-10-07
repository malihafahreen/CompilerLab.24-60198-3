#include <iostream>
using namespace std;

double findAverage(double arr[], int size)
{
    double sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum / size;
}

void task5()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if(n <= 0)
    {
        cout << "Number of elements must be greater than 0.\n";
        return;
    }

    double arr[100];

    cout << "Enter " << n << " elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double average = findAverage(arr, n);

    cout << "Average = " << average << endl;
}
