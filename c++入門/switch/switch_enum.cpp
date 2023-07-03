/*
Switch with enumeration
*/
#include <iostream>
using namespace std;

int main()
{
    enum Direction {
        left, right, up, down
    };

    Direction heading {right};

    switch (heading) {
        case left:
        cout << "Going left \n";
        break;
        case right:
        cout << "Going right \n";
        break;
        case up:
        cout << "Going up \n";
        break;
        case down:
        cout << "Going down \n";
        break;

        default:
        cout << "OK\n";
    }


    return 0;
}