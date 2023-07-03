/*
A 社にはもともと a 人の従業員がいました。今年新たに b 人の従業員を採用しました。現在 A 社には何人の従業員がいますか？

入力例 1 の場合
180
150
もともと 180 人、新たに 150 人入ってくるので、
330
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    // Start from below
    int input1{}, input2{};
    cin >> input1;
    cin >> input2;
    cout << input1 + input2;
    return 0;
}