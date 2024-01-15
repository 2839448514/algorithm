#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <bitset>
#include <conio.h>
#include <ctime>
using namespace std;

// 归并排序
int MergeSort(int *arr, int left, int right)
{
	int i, j, k;
	int mid;
	int temp[100];
	if (left < right)
	{
		mid = (left + right) / 2;
		MergeSort(arr, left, mid);
		MergeSort(arr, mid + 1, right);
		i = left;
		j = mid + 1;
		k = left;
		while (i <= mid && j <= right)
		{
			if (arr[i] <= arr[j])
			{
				temp[k] = arr[i];
				i++;
			}
			else
			{
				temp[k] = arr[j];
				j++;
			}
			k++;
		}
		while (i <= mid)
		{
			temp[k] = arr[i];
			i++;
			k++;
		}
		while (j <= right)
		{
			temp[k] = arr[j];
			j++;
			k++;
		}
		for (int i = left; i <= right; i++)
		{
			arr[i] = temp[i];
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
    MergeSort(arr, 1,n);
    cout << "排序后：";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
