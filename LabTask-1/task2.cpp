#include <iostream>
using namespace std;


int isOperator(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' ||
       ch == '/' || ch == '%' || ch == '=')
    {
        return 1;
    }

    return 0;
}

void task2()
{
    char str[100];

    cout << "Enter an expression: ";
    cin >> str;

    int operatorNumber = 1;
    int found = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isOperator(str[i]) == 1)
        {
            cout << "operator" << operatorNumber << ": "
                 << str[i] << endl;

            operatorNumber++;
            found = 1;
        }
    }

    if(found == 0)
    {
        cout << "No operator found.\n";
    }
}
