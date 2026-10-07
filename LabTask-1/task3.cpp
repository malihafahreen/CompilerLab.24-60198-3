#include <iostream>
#include <string>
using namespace std;

int isComment(string str)
{
    if(str.length() >= 2)
    {
        if(str[0] == '/' && str[1] == '/')
        {
            return 1;
        }

        if(str[0] == '/' && str[1] == '*')
        {
            return 1;
        }
    }

    return 0;
}

void task3()
{
    string str;


    cout << "Enter a comment: ";
    cin >> str;

    if(isComment(str) == 1)
    {
        cout << "This is a comment line.\n";
    }
    else
    {
        cout << "This is not a comment line.\n";
    }
}
