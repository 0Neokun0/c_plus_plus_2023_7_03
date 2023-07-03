/*
あるゲームでは名前を最大で 10 文字まで付けられます。A 君の現在の名前が与えられるので、あと何文字付けられるか答えてください。

入力例 1 の場合
neko
neko は 4 文字なので、10 - 4 で
6
と出力してください。
*/
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;

    int remainingSpace = 10 - input.length();
    std::cout << remainingSpace << std::endl;

    return 0;
}
