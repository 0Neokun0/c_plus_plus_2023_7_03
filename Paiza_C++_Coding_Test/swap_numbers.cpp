/*
input 10 20
output 20 10
*/
#include <iostream>
using namespace std;

int main()
{
    // Start from below
    int a {}, b {}, temp;

    cin >> a >> b;


    temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;

    return 0;
}