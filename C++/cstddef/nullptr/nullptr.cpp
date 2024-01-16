#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstddef> //C++11__nullptr所在文件夹，具体查看头文件目录或nullptr.md
using namespace std;

void fun(int)
{
    cout << "fun(int)" << endl;
}

void fun(void*){
    cout << "fun(void*)" << endl;
}
int main(int argc, char *argv[])
{
    fun(nullptr);
    return 0;
}