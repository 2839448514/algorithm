#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <bitset>
#include <conio.h>
#include<algorithm>
#include <ctime>
using namespace std;

// 选择排序
int SelectSort(int *arr, int n)
{
    int i,j,min;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            if(min!=i){
                swap(arr[i], arr[min]);
            }
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
    SelectSort(arr, n);
    cout << "排序后：";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
