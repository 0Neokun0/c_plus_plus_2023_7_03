/*
あなたは2社の通信販売サイトの価格比較をしています。

価格、送料がスペース区切りで各社1行ずつ改行区切りで与えられるので価格と送料の合計が安い方の合計価格を出力してください。
価格、送料の合計が同じ場合はどちらの合計を出力しても問題ない点に注意してください。

入力例 1 の場合
2000 250
2100 100
2000 + 250 = 2250 と 2100 + 100 = 2200 では 2200 の方が安いので
2200
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input1{}, input2{}, input3{}, input4{};
    cin >> input1 >> input2;
    cin >> input3 >> input4;
    int output12 = input1 + input2;
    int output34 = input3 + input4;
    if (output12 <= output34)
    {
        cout << output12;
    }
    else
        cout << output34;


    return 0;
}