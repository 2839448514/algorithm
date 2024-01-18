#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
#include <algorithm>
#include <ctime>
using namespace std;

// 整数二分
/*
@@方法
set<int>::iterator bin_search(set<int> &a, int key)
{
    return a.lower_bound(key);
}
*/
// 寻找x的后继
int bin_search(int *a, int n, int x)
{
    int left = 0, right = n;
    while (left < right)
    {
        int mid = left + (right - left) / 2; // int mid=(left+right)>>1;
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
// 寻找x的前驱
int bin_search2(int *a, int n, int x)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] <= x)
        {
            left = mid;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left;
}
int main(int argc, char *argv[])
{
    const int n = 100;
    int a[n];
    srand(time(nullptr));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 1000;
    }
    sort(a, a + n);
    cout << a[bin_search(a, n, 100)] << endl;
    cout << *lower_bound(a, a + n, 100);
    return 0;
}