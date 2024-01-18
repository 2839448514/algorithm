#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 尺取法 例二(反向扫描)
/*
问题2.(判断回文串)“回文串”是正读和反读都相同的字符串。输入一个字符串，判断它是不是回文串。例如，"abba"是回文串，而"abcba"不是。是则输出yes，否则输出no。
*/

void is_palindrome()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        bool ans = true;
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                ans = false;
                break;
            }
            i++, j--;
        }
        if (ans)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}

int main(int argc, char *argv[])
{
    is_palindrome();
    return 0;
}