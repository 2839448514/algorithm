#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 尺取法 例三(同向扫描)
/*
问题3.(寻找区间和)给定一个长度为n的数组a[]和一个数s，在这个数组中找一个区间，使这个区间的数组元素之和等于s。输出区间的起点和终点。
说明：输入样例的第一行是n，表示数组的长度，第二行是n个整数，表示数组的元素，第三行是s，表示区间，使用空格连接。
*/

void find_sum(int *a, int n, int s)
{
    int i = 0, j = 0;
    int sum = a[0];
    while (j < n)
    {
        if (sum >= s)
        {
            if (sum == s)
            {
                cout << "[" << i << "," << j << "]" << endl;
            }
            sum -= a[i];
            i++;
        }
        if (sum < s)
        {
            j++;
            sum += a[j];
        }
    }
}

int main(int argc, char *argv[])
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int s = 15;
    find_sum(a, n, s);
    return 0;
}
