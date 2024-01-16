#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

auto a = 1; // int a = 1;
auto b = 1.01;// double b = 1.0;
auto l=[](int c){cout << c << endl;};// lambda函数 匿名函数
int main(int argc, char *argv[])
{
    cout<<"auto a="<<a<<endl;
    cout<<"auto b="<<b<<endl;
    l(1);
    return 0;
}