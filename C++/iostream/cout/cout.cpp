#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

// 此处展示cout的使用

// 不同进制输出
int test0()
{
    int i = 1;
    cout << i << ++i << i++ << i << endl; // 1223
    cout << "以二进制输出:" << bitset<32>(24) << endl;
    cout << "以10进制输出:" << dec << 24 << endl;             // 以10进制输出
    cout << "以8进制输出:" << oct << 24 << endl;              // 以8进制输出
    cout << "以16进制输出:" << hex << 24 << endl;             // 以16进制输出
    cout << "以16,10,8进制输出:" << setbase(8) << 24 << endl; // 以16,10,8进制输出@@@只能填入10,8,16

    return 0;
}
// 不同数字位数输出
int test1()
{
    cout << "输出10位数:" << setfill('0') << setw(10) << 123 << endl;            // 以10位数输出不足为填0
    cout << "以小数形式输出:" << fixed << 24.0 << endl;                          // 以小数形式输出
    cout << "以小数形式输出精度为2:" << setprecision(2) << 24.0 << endl;         // 以小数形式输出，保留两位小数
    cout << "以科学计数法形式输出:" << scientific << 24.0 << endl;               // 以科学计数法形式输出
    cout << "以科学计数法形式输出精度为2:" << setprecision(2) << 24.011 << endl; // 以科学计数法形式输出，保留两位小数
    cout.setf(ios::fixed);
    cout << "强制显示小数点:" << setiosflags(ios::showpoint) << 24.0 << endl; // 强制显示小数点
    cout << "强制显示符号" << setiosflags(ios::showpos) << 24.0 << endl;      // 强制显示符号

    return 0;
}

int main(int argc, char *argv[])
{
    // test0();
    test1();
    return 0;
}