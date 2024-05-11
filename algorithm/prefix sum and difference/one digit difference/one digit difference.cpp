#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

// 一维差分

/*
问题:(Color the ball)有N个气球排成一排，从左到右依次编号为1，2，3...N。每次给定两个整数l和r，某人从气球l到r依次给气球l到r涂色，N次以后他忘记第i个气球涂过几次了，输出每个气球涂过几次了？
*/

int front_sum(const vector<int> &a, int l, int r)
{
    if (l == r)
    {
        return a[l];
    }
    else
    {
        return a[l] + front_sum(a, l + 1, r);
    }
}

int devide(vector<int> &a, int l, int r)
{
    a[l] += 1, a[r + 1] -= 1;
    return 0;
}

int main(int argc, char *argv[])
{
    int N;
    cin >> N;
    int n = N;
    int l, r;
    vector<int> D(N + 2, 0);
    while (n-- > 0)
    {
        cin >> l >> r;
        devide(D, l, r);
    }
    for (int i = 1; i < N + 1; i++)
    {
        cout << front_sum(D, 0, i) << endl;
    }
    return 0;
}