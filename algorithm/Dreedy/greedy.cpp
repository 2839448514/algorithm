#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 贪心算法

int greed(vector<int> &v, int n)
{
    sort(v.begin(), v.end(), [](int a, int b)
         { return b < a; });
    for (int i = 0; n > 0; i++)
    {
        int remain = n / v[i];
        n = n - remain * v[i];
        cout << remain << " ";
    }
    return 0;
}
int main(int argc, char *argv[])
{
    vector<int> v({5, 4, 8, 1, 6, 3});
    greed(v, 1233);
    return 0;
}