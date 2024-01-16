#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
容器string
*/

void t1()
{
    string s1 = "hello";      // 定义字符串s1并初始化为"hello"
    cout << s1 << endl;       // 输出s1
    string s2("123");         // 定义字符串s2并初始化为"123"
    cout << s2 << endl;       // 输出s2
    string s3{'a', 'b', 'c'}; // 定义字符串s3并初始化为"abc"
    cout << s3 << endl;       // 输出s3
    string s4(10, '3');       // 定义字符串s4并初始化为"3333333333"（共10个3）
    cout << s4 << endl;       // 输出s4
    string s5(s4, 1, 3);      // 定义字符串s5并初始化为"333"（从s4的第1个字符开始，取3个字符）
    cout << s5 << endl;       // 输出s5
    s5 = "111";               // 将s5赋值为"111"
    cout << s5 << endl;       // 输出s5
    s5 += "222";              // 将s5连接上"222"
    cout << s5 << endl;       // 输出s5
    s5 += s4;                 // 将s4连接到s5末尾
    cout << s5 << endl;       // 输出s5
    s5.append("12345");       // 将"12345"追加到s5末尾
    cout << s5 << endl;       // 输出s5
}

void t2()
{
    string s1 = "hello";                      // 定义字符串s1并初始化为"hello"
    cout << s1.length() << endl;              // 输出s1的长度
    cout << s1.find("l") << endl;             // 输出子串"l"在s1中第一次出现的索引位置
    cout << s1.find("l", 1) << endl;          // 输出子串"l"在s1中从索引1开始第一次出现的索引位置
    cout << s1.find("l", 1, 3) << endl;       // 输出子串"l"在s1中从索引1开始第一次出现的索引位置，搜索范围为[1,2]
    cout << s1.find_first_of("l") << endl;    // 输出第一个字符为"l"的字符在s1中的索引位置
    cout << s1.find_first_of("l", 1) << endl; // 输出从索引1开始第一个字符为"l"的字符在s1中的索引位置
    cout << s1.c_str() << endl;               // 返回字符串的指针
    s1.replace(0, 3, "1234567890");           // 替换s1的前3个字符
    cout << s1 << endl;
    cout << s1.compare("1234567890") << endl; // 比较s1和"1234567890"
    cout << s1.compare(1, 5, s1, 0, 10) << endl;
    cout << s1.compare(1, 5, s1) << endl; // 输出字符串 s1 从索引1开始的连续5个字符与字符串 s1 的比较结果
    cout << s1.substr(1, 5) << endl;
    cout << s1.substr(3) << endl;
    s1="2839448514@qq.com";
    cout << s1.substr(0,s1.find("@")) << endl;
    cout << s1.substr(s1.find("@")+1) << endl;
}

int main(int argc, char *argv[])
{
    // t1();
    t2();
    return 0;
}