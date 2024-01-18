#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 整数二分
/*
问题1.(寻找指定和的整数对)输入n(n<=100000)个整数找出其中两个数使得它们的和等于给定的数m。  @@(在尺取法中有尺取法的做法)
*/

int find_sum(int *a, int n, int x)
{
    int ans;
    int left = 0, right = n - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] >= x)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}
int bisection(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x - a[i] == a[find_sum(a + i, n - i - 1, x - a[i])])
        {
            cout << a[i] << " " << x - a[i] << endl;
        }
    }
    return 0;
}
int main(int argc, char *argv[])
{
    int n = 10;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 5;
    bisection(a, n, x);
    return 0;
}