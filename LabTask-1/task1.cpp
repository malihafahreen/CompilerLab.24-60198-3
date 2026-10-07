#include <iostream>
using namespace std;


int isNumeric(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] < 48 || str[i] > 57)
        {
            return 0;
        }
    }

    return 1;
}


void task1()
{
    char str[100];

    cout << "Enter a value: ";
    cin >> str;


    if(isNumeric(str))
    {
        cout << "It is a numeric constant." << endl;
    }
    else
    {
        cout << "It is not a numeric constant." << endl;
    }
}
