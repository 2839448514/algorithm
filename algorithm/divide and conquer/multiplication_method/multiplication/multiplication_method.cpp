#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

// 倍增法
/*
问题：(国旗计划)边境上面有m个战士围成一圈，顺时针编号为1~m，有n名战士，每名战士常驻两个站，能在两个站之间移动。局长有一个“国旗计划”，让边防的战士举着国旗坏绕一周。局长想知道至少需要多少名战士。
*/

const int N = 4e5 + 1;
int n, m;
struct warrior
{
    int id, L, R; // id:战士的编号；L、R，战士的左右区间
    bool operator<(const warrior b) const { return L < b.L; }
} w[N * 2];
int n2;
int go[N][20];
void init()
{ // 贪心 + 预计算倍增
    int nxt = 1;
    for (int i = 1; i <= n2; i++)
    { // 用贪心求每个区间的下一个区间
        while (nxt <= n2 && w[nxt].L <= w[i].R)
            nxt++;          // 每个区间的下一个是右端点最大的那个区间
        go[i][0] = nxt - 1; // 区间i的下一个区间
    }
    for (int i = 1; (1 << i) <= n; ++i) // 倍增：i=1,2,4,8,... 共log(n)次
        for (int s = 1; s <= n2; s++)   // 每个区间后的第2^i个区间
            go[s][i] = go[go[s][i - 1]][i - 1];
}
int res[N];
void getans(int x)
{ // 从第x个战士出发
    int len = w[x].L + m, cur = x, ans = 1;
    for (int i = log2(N); i >= 0; i--)
    { // 从最大的i开始找：2^i = N
        int pos = go[cur][i];
        if (pos && w[pos].R < len)
        {
            ans += 1 << i; // 累加跳过的区
            cur = pos;     // 从新位置继续开始
        }
    }
    res[w[x].id] = ans + 1;
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        w[i].id = i; // 记录战士的顺序
        scanf("%d%d", &w[i].L, &w[i].R);
        if (w[i].R < w[i].L)
            w[i].R += m; // 把环变成链
    }
    sort(w + 1, w + n + 1); // 按左端点排序
    n2 = n;
    for (int i = 1; i <= n; i++) // 拆环加倍成一条链
    {
        n2++;
        w[n2] = w[i];
        w[n2].L = w[i].L + m;
        w[n2].R = w[i].R + m;
    }
    init();
    for (int i = 1; i <= n; i++)
        getans(i); // 逐个计算每个战士
    for (int i = 1; i <= n; i++)
        printf("%d ", res[i]);
    return 0;
}
