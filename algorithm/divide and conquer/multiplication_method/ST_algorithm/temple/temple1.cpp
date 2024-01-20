#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// ST算法
/*
问题1.(Balanced lineup)给定一个包含n的整数的数列和q个区间查询，查询区间最大值和最小值的差。
*/

const int N = 50005;
int n, m;
int a[N], dp_max[N][22], dp_min[N][21];
int LOG2[N]; // 自己计算以2为底的对数，向下取整
void st_init()
{
    // LOG2[0] = -1;
    // for (int i = 1; i <= N; i++)
    //     LOG2[i] = LOG2[i >> 1] + 1; // 不用系统log()函数，自己算
    for (int i = 1; i <= n; i++)
    { // 初始化区间长度为1时的值
        dp_min[i][0] = a[i];
        dp_max[i][0] = a[i];
    }
    // int p=log2(n);                          //可倍增区间的最大次方: 2^p <= n
    int p = (int)(log(double(n)) / log(2.0)); // 两者写法都行
    for (int k = 1; k <= p; k++)              // 倍增计算小区间。先算小区间，再算大区间，逐步递推
        for (int s = 1; s + (1 << k) <= n + 1; s++)
        {
            dp_max[s][k] = max(dp_max[s][k - 1], dp_max[s + (1 << (k - 1))][k - 1]);
            dp_min[s][k] = min(dp_min[s][k - 1], dp_min[s + (1 << (k - 1))][k - 1]);
        }
}
int st_query(int L, int R)
{
    //  int k = log2(R-L+1);                           //3种方法求k
    int k = (int)(log(double(R - L + 1)) / log(2.0));
    //  int k = LOG2[R-L+1];                            //自己算LOG2
    int x = max(dp_max[L][k], dp_max[R - (1 << k) + 1][k]); // 区间最大
    int y = min(dp_min[L][k], dp_min[R - (1 << k) + 1][k]); // 区间最小
    return x - y;                                           // 返回差值
}
int main()
{
    scanf("%d%d", &n, &m); // 输入
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    st_init();
    for (int i = 1; i <= m; i++)
    {
        int L, R;
        scanf("%d%d", &L, &R);
        printf("%d\n", st_query(L, R));
    }
    return 0;
}
