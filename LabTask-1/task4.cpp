#include <iostream>
#include <string>
using namespace std;

int isLetter(char ch)
{
    if((ch >= 'A' && ch <= 'Z') ||
       (ch >= 'a' && ch <= 'z'))
    {
        return 1;
    }

    return 0;
}

int isDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return 1;
    }

    return 0;
}

int isIdentifier(string str)
{
    if(str.length() == 0)
    {
        return 0;
    }

    if(isLetter(str[0]) == 0 && str[0] != '_')
    {
        return 0;
    }

    for(int i = 1; i < str.length(); i++)
    {
        if(isLetter(str[i]) == 0 &&
           isDigit(str[i]) == 0 &&
           str[i] != '_')
        {
            return 0;
        }
    }

    return 1;
}

void task4()
{
    string str;

    cout << "Enter an identifier: ";
    cin >> str;

    if(isIdentifier(str) == 1)
    {
        cout << str << " is a valid identifier.\n";
    }
    else
    {
        cout << str << " is not a valid identifier.\n";
    }
}
