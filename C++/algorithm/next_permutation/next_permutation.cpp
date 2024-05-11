#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

// next_permutation后一个全排列
// prev_permutation前一个全排列

// 手写全排列

int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
bool vis[20]; // 记录第i个数是否用过
int b[20];    // 生成的一个全排列
void dfs(int s, int t)
{
    if (s == t)
    { // 递归结束，产生一个全排列
        for (int i = 0; i < t; ++i)
            cout << b[i] << " "; // 输出一个排列
        cout << endl;
        return;
    }
    for (int i = 0; i < t; i++)
        if (!vis[i])
        {
            vis[i] = true;
            b[s] = a[i];
            dfs(s + 1, t);
            vis[i] = false;
        }
}
int main()
{
    int n = 3;
    dfs(0, n); // 前n个数的全排列

    //  string v = {'a', 'b', 'c'};
    // do
    // {
    //     cout << v << endl;
    // } while (next_permutation(v.begin(), v.end()));
    return 0;
}
