/*
A 君は株取引をしています。A 君は B 社の株を X 円で購入しましたが、1 年後に Y 円で売却しました。
A 君がこの取引で得した場合は Yes を、損した場合は No　を出力してください。

入力例 1 の場合
210
190
A 君は株を 210 円で買い、190 円で売却しているので損をしています。
 No 
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input1 {}, input2 {};
    cin >> input1;
    cin >> input2;

    if( input1 <= input2)
    {
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}