/*

*/
#include <iostream>
using namespace std;

int main()
{
    for (int i{1}, j{5}; i <= 10; ++i, ++j)
        cout << i << " + " << j << " = " << (i+j) << "\n";
    return 0;
}