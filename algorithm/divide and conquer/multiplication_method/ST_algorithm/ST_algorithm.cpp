#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

// ST算法

// 打表求每一个区间和
int table_print(vector<int> v, int n, int left, int right)
{
    vector<vector<int>> table(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i == j)
            {
                table[i][j] = v[i];
            }
            else
            {
                table[i][j] = max(table[i][j - 1], v[j]);
            }
        }
    }
    return table[left][right];
}

int main()
{
    vector<int> v({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    cout << table_print(v, 10, 1, 5);
    return 0;
}
