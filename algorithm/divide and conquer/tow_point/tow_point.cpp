#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

/*
tow_point(尺取法又称双指针)
*/

// 尺取法的实现
void t1()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for实现
    for (int i1 = 0, j1 = 9; i1 < j1; i1++, j1--)
    {
        cout << i1 << " " << j1 << endl;
    }
    cout << endl;
    // while实现
    int i = 0, j = 9;
    while (i < j)
    {
        cout << i << " " << j << endl;
        i++, j--;
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    t1();
    return 0;
}