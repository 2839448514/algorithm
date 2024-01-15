#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
#include <algorithm>
#include <ctime>
using namespace std;
// 快速排序

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // 选择数组最后一个元素作为基准值
    int i = low - 1;       // 初始化i为low的前一个位置

    for (int j = low; j < high; j++)
    {
        // 如果当前元素小于等于基准值，则将其与i位置的元素交换，并将i向后移动一位
        if (arr[j] <= pivot)
            swap(arr[j], arr[++i]);
    }
    // 将i位置的元素与基准值交换，使得数组被分成了两部分
    swap(arr[high], arr[i + 1]);
    return i + 1; // 返回基准值最终的位置
}
void qsort(int arr[], int low, int high)
{
    // 如果low小于high，则继续排序
    if (low < high)
    {
        // 计算分区点
        int mid = partition(arr, low, high);
        // 对分区前的子数组进行快速排序
        qsort(arr, low, mid - 1);
        // 对分区后的子数组进行快速排序
        qsort(arr, mid + 1, high);
    }
}
int QuickSort(int *arr, int n)
{
    // 调用qsort函数对arr数组进行排序
    qsort(arr, 0, n - 1);
    // 返回0表示排序完成
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
    QuickSort(arr, n);
    cout << "排序后：";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
