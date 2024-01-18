#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;

// 实数二分
/*
计算一个实数的平方根，给定一个误差eps和一个数n，求出n的平方根，
*/

double realnumber(double eps, double n, double x)
{
    double right = n, left = 0;
    while (right - left > eps)
    {
        double mid = left + (right - left) / 2;
        if (mid * mid >= x)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    return right;
}

int main(int argc, char *argv[])
{
    double eps = 0.000001;
    double n = 1000;
    double x = 11.984321;
    double result = realnumber(eps, n, x);
    cout << "result=" << setprecision(10) << result << endl;
    return 0;
}