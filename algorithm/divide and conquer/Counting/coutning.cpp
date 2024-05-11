#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 快速幂

long long quickpow(long long a, long long n, int pos)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return a;
    }

    int temp = quickpow(a, n / 2, pos);
    if (n & 1)
    {
        return temp * temp * a % pos;
    }
    else
    {
        return temp * temp % pos;
    }
}

int main(int argc, char *argv[])
{
    cout<<quickpow(3, 5, 7)<<endl;
    return 0;
}