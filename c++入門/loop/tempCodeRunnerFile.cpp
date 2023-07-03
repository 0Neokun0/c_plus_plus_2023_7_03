/*
Iteration or repetition
C++ Looping Constructs

1) for loop
    - iterate a specific number of times
2) Range-based for loop
    - one iteration for each element in a range or collection
3) while loop
    - iterate while a condition remains true
    - stop when the condition becomes false
    - check the condition at the beginning of every iteration
4) do-while loop
    - iterate while a condition remain true
    - stop when the condition becomes false
    - check the conditon at the end of every literation
*/
#include <iostream>
using namespace std;

int main()
{
    for (int i{1}; i <= 10; ++i) // 1 to 10
        cout << i << "\n";

    cout << "=============== Increment by 2 each time ===============\n";

    for (int j{1}; j <= 10; j += 2) // 1 to 10 +2
        cout << j << "\n";

    cout << "=============== Increment by 10 each time ===============\n";

    for (int k{10}; k <= 100; k += 10) // 1 to 10 +2
    {
        cout << k << "\n";
    }

    cout << "=============== Increment by 10 each time but show only divisible by 15 ===============\n";

    for (int k{10}; k <= 100; k += 10) // 1 to 10 +2
    {
        if (k % 15 == 0)
            cout << k << "\n";
    }
    cout << "=============== Reverse ===============\n";

    for (int i{10}; i >= 0; --i) // 10 to 1
        cout << i << "\n";
    cout << "Blast OFF !";

    return 0;
}