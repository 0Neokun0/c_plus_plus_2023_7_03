/*
あなたの通う Paiza 小学校では、10 回同じ単語を言った後にひっかけクイズに答える十回ゲームの変則版である N 回ゲームがはやっています。
N 回ゲームでは、 N 回同じ単語を言った後にクイズに答えます。

そこで、言うべき単語と繰り返すべき回数が与えられるのでクイズに答える前に発言すべき文字列を出力してください。
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n{};
    string characters;

    cin >> n;
    cin >> characters;

    std::string repeatedString;

    for (int i = 0; i < n; ++i)
    {
        repeatedString += characters;
    }

    std::cout << repeatedString << std::endl;

    return 0;
}
