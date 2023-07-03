/*
アルファベットからなる長さ 5 の文字列 S が与えられます。この文字列の最後の文字を出力してください。

入力例 1 の場合
Namae
Namae の最後の文字は e なので、
e
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << str[4];

    return 0;
}