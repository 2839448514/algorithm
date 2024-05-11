#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

// 前缀和与差分

// 前缀和
int multiply(vector<int> &a, int l, int r)
{
    if (l == r)
    {
        return a[l];
    }
    else
    {
        return a[l] + multiply(a, l + 1, r);
    }
}

// 差分(前缀和的逆运算)

int devide(vector<int> &D, int l, int r, int x)
{
    D[l] += x, D[r + 1] -= x;
    return 0;
}

int main(int argc, char *argv[])
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> D(10, 0);
    devide(D, 2, 5, 1);
    devide(D, 3, 7, 4);
    // 求出修改后第5位的值
    cout << multiply(D, 0, 4) + a[4] << endl;
    return 0;
}