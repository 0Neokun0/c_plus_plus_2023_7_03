/*
switch (integer_control_exprt){
    case expression_1: statement ; break;
    case expression_2: statement ; break;
    case expression_3: statement ; break;

    default: statement_degault;
}
*/
#include <iostream>
using namespace std;

int main()
{
    char letter_grade{};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "You need a 90 or above, study hard!\n";
            break;
        case 'b':
        case 'B':
            cout << "You need 80-89 for a B, go study !\n";
            break;
        case 'c':
        case 'C':
            cout << "You need 70-79 for an average grade. \n";
            break;
        case 'd':
        case 'D':
            cout << "You need 70-79 for an average grade. \n";
            break;
        case 'f':
        case 'F':
        {
            char confirm {};
            cout << "Are you sure (Y/N) ? ";
            cin >> confirm;
            if(confirm == 'y' || confirm == 'Y')
            {
                cout << "OK, I guess you didn't study...\n";
            }
                
            else if (confirm == 'n' || confirm == 'N')
            {
                cout << "Good - go study! \n";
            }
            else
                cout << "Illegal choice. \n";
            break;
        }
        default:
            cout << "You should strive for a better grade. \n";
        

    }

    return 0;
}