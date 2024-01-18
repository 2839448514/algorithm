#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

// 实数二分
/*
主人过生日，m个人来庆生，有n块半径不同的圆形蛋糕，由m+1个人(加上主人)分，要求每人的蛋糕必须一样重，而且是完整的一块，问每个人能分到的蛋糕多大？
*/
#define eps 1e-6;
double PI = acos(-1.0);
double area[10010];
int n, m;
bool check(double mid)
{
    int sum = 0;
    for (int i = 0; i < n; i++) // 把每个圆蛋糕都按大小mid分开。统计总数
        sum += (int)(area[i] / mid);
    if (sum >= m)
        return true; // 最后看总数够不够m个
    else
        return false;
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &n, &m);
        m++;
        double maxx = 0;
        for (int i = 0; i < n; i++)
        {
            int r;
            scanf("%d", &r);
            area[i] = PI * r * r;
            if (maxx < area[i])
                maxx = area[i]; // 最大的一块蛋糕
        }
        double left = 0, right = maxx;
        for (int i = 0; i < 100; i++)
        { // for循环的次数，试试多小会Wrong Answer
            // while((right-left) > eps)   {   //用while循环做二分
            double mid = left + (right - left) / 2;
            if (check(mid))
                left = mid; // 每人能分到mid大小的蛋糕
            else
                right = mid; // 不够分到mid大小的蛋糕
        }
        printf("%.4f\n", left); // 打印right也对，right-left < eps
    }
    return 0;
}
