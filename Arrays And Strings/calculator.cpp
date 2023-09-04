#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    int exits = 1;
    while (exits)
    {
        int input;
        int x, y;
        cout << "\n 1) addition \n 2) substraction\n 3) Multiplication \n 4) division ";
        cout << "\n \n \nplease do not use any alphabets to do these operations this may give you the ASCII value or may loop start :  ";
        cin >> input;
        switch (input)
        {
        case 1:
            cout << "\n ADDITION : \n";
            cout << "enter the numbers to add : \n";
            cin >> x >> y;
            cout << x + y;
            cout << "do you want to exit : 0)YES or 1)NO : ";
            cin >> exits;
            break;
        case 2:
            cout << "\n SUBSTRACTION : \n";
            cout << "enter the numbers to substract : \n";
            cin >> x >> y;
            cout << x - y;
            cout << "do you want to exit : 0)YES or 1)NO : ";
            cin >> exits;
            break;
        case 3:
            cout << "\n MULTIPLICATION : \n";
            cout << "enter the numbers to multiplicaton : \n";
            cin >> x >> y;

            cout << x * y;

            cout << "do you want to exit : 0)YES or 1)NO : ";
            cin >> exits;
            break;
        case 4:
            cout << "\n DIVISION : \n";
            cout << "enter the numbers to divide : \n";
            cin >> x >> y;
            if (y == 0)
            {
                cout << "ERROR: you have taken 0 as a denominator";
            }
            else
            {
                cout << x / y;
            }
            cout << "do you want to exit : 0)YES or 1)NO : ";
            cin >> exits;

            break;

        default:
            cout << "invalid operation \n";

            cout << "do you want to exit : 0)YES or 1)NO : ";
            cin >> exits;
            break;
        }
    }
}