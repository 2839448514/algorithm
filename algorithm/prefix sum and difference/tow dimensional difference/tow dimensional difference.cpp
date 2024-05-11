#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

// 二位差分
/*
问题:(地毯)在n*n的格子上，有m块地毯，给出这些地毯的信息，计算每个点被多少地毯覆盖。
输入：第一行输入两个整数n，m。接下来m行，每行输入两个坐标，代表左上角和右下角。
输出：第i行第j列表示点(i,j)被多少块地毯覆盖
*/

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    vector<vector<int>> D(n + 1, vector<int>(n + 1, 0));
    while (m--)
    {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        D[x1][y1] += 1;
        D[x2 + 1][y1] -= 1;
        D[x1][y2 + 1] -= 1;
        D[x2 + 1][y2 + 1] += 1; // 计算差分数组
    }
    for (int i = 1; i <= n; ++i)
    { // 根据差分数组计算原矩阵的值（想象成求小格子的面积和）
        for (int j = 1; j <= n; ++j)
        { // 把用过的D[][]看成a[][]，就不用再定义a[][]了
            // a[i][j] = D[i][j] + a[i-1][j] + a[i][j-1] - a[i-1][j-1];
            // printf("%d ",a[i][j]);       //这两行和下面两行的效果一样
            D[i][j] += D[i - 1][j] + D[i][j - 1] - D[i - 1][j - 1];
            printf("%d ", D[i][j]);
        }
        printf("\n"); // 换行
    }
    return 0;
}
