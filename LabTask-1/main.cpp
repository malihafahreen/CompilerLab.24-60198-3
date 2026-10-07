#include <iostream>
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();

int main()
{
    int choice;

    do
    {
        cout << "\n LAB TASK-1 \n";
        cout << "1. Numeric Constant\n";
        cout << "2. Operators\n";
        cout << "3. Comment Line\n";
        cout << "4. Identifier\n";
        cout << "5. Average of Array\n";
        cout << "6. Minimum and Maximum\n";
        cout << "7. Full Name\n";
        cout << "0. Exit\n";
        cout << "================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                task1();
                break;

            case 2:
                task2();
                break;

            case 3:
                task3();
                break;

            case 4:
                task4();
                break;

            case 5:
                task5();
                break;

            case 6:
                task6();
                break;

            case 7:
                task7();
                break;

            case 0:
                cout << "\nProgram ended.\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while(choice != 0);

    return 0;
}
