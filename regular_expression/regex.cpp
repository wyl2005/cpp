#include <regex>
#include <iostream>
using namespace std;

// ����һ��������ʽ , 4~23 λ���ֺ���ĸ�����
regex repPattern("\[P: [0-9]{1,3} ");
// ����ƥ��������
match_results<string::const_iterator> rerResult;
// �����ƥ����ַ���
string strValue = "123[P: 10 abc";
// ����ƥ��


int main()
{
    bool bValid = regex_match(strValue, repPattern);
//    if (bValid)
    {
        // ƥ��ɹ�
        cout << (bValid? "valid":"NG") << endl;
    }
    cout << "test!!" << endl;

cout << regex_match("aaa123aaa", regex("\\d+")) << endl;
cout << regex_match("[debut] stm32 say:[50:50] [P:81 1]", regex(".*\[P: [0-9]{1,3} [0-1]{1}]")) << endl;
}
