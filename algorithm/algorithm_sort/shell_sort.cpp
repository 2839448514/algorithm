#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <bitset>
#include <conio.h>
#include <algorithm>
#include <ctime>
using namespace std;
// 希尔排序
int ShellSort(int *arr, int n)
{
    int i, j, gap, temp;
    // 初始增量 n/2
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        // 每一趟采用插入排序
        for (i = gap; i < n; i++)
        {
            temp = arr[i];
            for (j = i; j >= gap && temp < arr[j - gap]; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int n;
    cout << "请输入数组的长度：";
    cin >> n;
    int *arr = new int[n];
    cout << "请输入数组元素：" << endl;
    srand(unsigned(time(nullptr)));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    cout << "排序前：";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    ShellSort(arr, n);
    cout << "排序后：";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
