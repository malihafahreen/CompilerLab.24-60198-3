#include <iostream>
using namespace std;

void findMinMax(double arr[], int size,
                double &minimum, double &maximum)
{
    minimum = arr[0];
    maximum = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }

        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
}

void task6()
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

    double minimum;
    double maximum;

    findMinMax(arr, n, minimum, maximum);

    cout << "Minimum = " << minimum << endl;
    cout << "Maximum = " << maximum << endl;
}
