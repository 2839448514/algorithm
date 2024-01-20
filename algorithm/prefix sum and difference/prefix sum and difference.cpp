#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

// 前缀和与差分

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

int main(int argc, char *argv[])
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int c = multiply(a, 1, 3);
    cout << c;
    return 0;
}