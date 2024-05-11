#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 汉诺塔
/*
问题：(汉诺塔)有三根杆子A，B，C。A杆上面有N个(N>1)穿孔圆盘，盘的尺寸由上到下依次变小。要求按照下列规则将所有的圆盘移动至C杆，每次只能移动一个圆盘，大盘不能放在小盘上面。问如何移动最少移动多少次。
*/
int sum = 0, m;
void hanoi(char x, char y, char z, int n)
{ // 三个柱子x、y、z
    if (n == 1)
    { // 最小问题
        sum++;
        if (sum == m)
            cout << "#" << n << ": " << x << "->" << z << endl;
    }
    else
    {                          // 分治
        hanoi(x, z, y, n - 1); //(1)先把x的n-1个小盘移到y，然后把第n个大盘移到z
        sum++;
        if (sum == m)
            cout << "#" << n << ": " << x << "->" << z << endl;
        hanoi(y, x, z, n - 1); //(2)把y的n-1个小盘移到z
    }
}
int main()
{
    int n;
    cin >> n >> m;
    hanoi('A', 'B', 'C', n);
    cout << sum << endl;
    return 0;
}
