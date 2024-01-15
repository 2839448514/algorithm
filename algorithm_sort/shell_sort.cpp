#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <bitset>
#include <conio.h>
#include <ctime>
using namespace std;
//希尔排序
int ShellSort(int *arr, int n)
{
	int gap;
	int i, j;
	int temp;
    for (gap = n / 2; gap > 0; gap /= 2)
	{
		for (i = 0; i < gap; i++)
		{
			for (j = i + gap; j < n; j++)
			{
				if (arr[j] < arr[j - gap])
				{
					temp = arr[j];
					arr[j] = arr[j - gap];
                    arr[j - gap] = temp;
				}
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
	ShellSort(arr, n);
	cout << "排序后：";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
