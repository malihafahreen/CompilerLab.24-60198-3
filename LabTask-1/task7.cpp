#include <iostream>
#include <string>
using namespace std;

string concatenateName(string firstName, string lastName)
{
    return firstName + " " + lastName;
}

void task7()
{
    string firstName;
    string lastName;

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    string fullName = concatenateName(firstName, lastName);

    cout << "Full name = " << fullName << endl;
}
