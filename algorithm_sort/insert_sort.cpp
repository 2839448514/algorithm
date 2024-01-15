#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <bitset>
#include <conio.h>
#include <ctime>
using namespace std;

// 插入排序
int InsertSort(int *arr, int n)
{
	int i, j;
	int temp;
	for (i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
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
	InsertSort(arr, n);
	cout << "排序后：";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
