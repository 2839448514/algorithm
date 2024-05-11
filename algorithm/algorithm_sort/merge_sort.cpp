#include <iostream>
#include <string>
#include <bitset>
#include <conio.h>
#include <ctime>
#include <algorithm> // 包含algorithm头文件以使用std::merge和std::sort
using namespace std;

// 归并排序
void merge(int *arr, int *temp, int left, int mid, int right) {
    int l = left, r = mid + 1, pos = left;
    while (l <= mid && r <= right) {
        if (arr[l] < arr[r]) {
            temp[pos++] = arr[l++];
        } else {
            temp[pos++] = arr[r++];
        }
    }
    while (l <= mid) {
        temp[pos++] = arr[l++];
    }
    while (r <= right) {
        temp[pos++] = arr[r++];
    }
    // 将排序后的数组复制回原始数组arr
    for (int i = left; i <= right; ++i) {
        arr[i] = temp[i];
    }
}

void msort(int *arr, int *temp, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        msort(arr, temp, left, mid);
        msort(arr, temp, mid + 1, right);
        merge(arr, temp, left, mid, right);
    }
}

// 返回排序后的数组
void MergeSort(int *arr, int n) {
    int *temp = new int[n];
    if (temp) {
        msort(arr, temp, 0, n - 1);
        delete[] temp;
    }
}

int main(int argc, char *argv[]) {
    int n;
    cout << "请输入数组的长度：";
    cin >> n;
    int *arr = new int[n];
    cout << "请输入数组元素：" << endl;
    srand(unsigned(time(nullptr)));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    cout << "排序前：";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    MergeSort(arr, n);
    cout << "排序后：";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr; // 释放数组内存
    return 0;
}
