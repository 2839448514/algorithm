#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <bitset>
#include <conio.h>
#include <ctime>
using namespace std;
// 冒泡排序
int BubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > i; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
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
    BubbleSort(arr, n);
    cout << "排序后：";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
