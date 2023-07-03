/*
(cond_expr) ? expr1 : expr 2
*/
#include <iostream>
using namespace std;

int main()
{
    int num {};

    cout << "Enter an integer :";
    cin >> num;

    if(num % 2 ==0)
        cout << num << " is even\n";
    else
        cout << num << " is odd\n"; 

    cout << num << " is" << ((num %2 == 0) ? "even" : "odd" ) << "\n";

    cout << "\n";
    return 0;
}