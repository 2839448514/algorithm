#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

// 尺取法 例四(同向扫描)
/*
问题4：(找相同数的数对)给一串数以及一个数字C，要求计算所有A-B=C的数对的个数(不同位置的数字一样的数对算不同的数对)
*/

void find(int *a, int n, int c)
{
    sort(a, a + n);
    int i = 0, j = 0;
    while (j < n)
    {
        if (a[j] - a[i] >= c)
        {
            if (a[j] - a[i] == c)
            {
                int q = j;
                while (a[q] == a[j])
                {
                    if (a[q] - a[i] == c)
                    {
                        cout << a[i] << " " << a[j] << " " << a[q] - a[i] << endl;
                        q++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            i++;
        }
        if (a[j] - a[i] < c)
        {
            j++;
        }
    }
}

// void find(int *a, int n, int c)
// {
//     sort(a, a + n);
//     long long ans = 0;
//     for (int i = 0, j = 0, k = 0; i < n; i++)
//     {
//         while (j < n && a[j] - a[i] < c)
//         {
//             j++;
//         }
//         while (k < n && a[k] - a[i] <= c)
//         {
//             k++;
//         }
//         if (a[j] - a[i] == c && a[k - 1] - a[i] == c && k - 1 >= 1)
//         {
//             ans += k - j;
//         }
//     }
//     cout << ans << endl;
// }
int main(int argc, char *argv[])
{
    int n = 6;
    int a[n] = {8, 4, 5, 7, 7, 4};
    int c = 3;
    find(a, n, c);

    return 0;
}