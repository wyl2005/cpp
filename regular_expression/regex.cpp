#include <regex>
#include <iostream>
using namespace std;

// 定义一个正则表达式 , 4~23 位数字和字母的组合
regex repPattern("\[P: [0-9]{1,3} ");
// 声明匹配结果变量
match_results<string::const_iterator> rerResult;
// 定义待匹配的字符串
string strValue = "123[P: 10 abc";
// 进行匹配


int main()
{
    bool bValid = regex_match(strValue, repPattern);
//    if (bValid)
    {
        // 匹配成功
        cout << (bValid? "valid":"NG") << endl;
    }
    cout << "test!!" << endl;

cout << regex_match("aaa123aaa", regex("\\d+")) << endl;
cout << regex_match("[debut] stm32 say:[50:50] [P:81 1]", regex(".*\[P: [0-9]{1,3} [0-1]{1}]")) << endl;
}
