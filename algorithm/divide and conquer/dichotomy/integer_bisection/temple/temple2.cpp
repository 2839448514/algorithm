// #define _CRT_SECURE_NO_WARNINGS
// #include <iostream>
// #include <algorithm>
// using namespace std;

// // 整数二分(最大值最小化)
// /*
// 问题2.(序列化分)例如，有一个序列{2,2,3,4,5,1}，将其划分为3个连续的子序列S1，S2，S3，每个子序列最少有一个元素，要求使每个序列的和的最大值最小。
// */
// int bin_search(int *a, int *b, int n1, int n2, int x)
// {
//     int left = 0, right = n2;
//     int sum1 = 0;
//     int i = 0, group = 0;
//     while (left < right)
//     {
//         int mid = left + (right - left) / 2; // int mid=(left+right)>>1;
//         if (sum1 < x)
//         {
//             while (sum1 < x && i + 1 < n1 && a[i + 1] < x)
//             {
//                 sum1 += a[i];
//                 i += 1;
//             }
//         }
//         else if (a[i + 1] >= x)
//         {
//             group += 1;
//             sum1 = 0;
//         }
//         if (group > 3 && i != n1 - 1)
//         {
//             if (a[mid] >= x)
//             {
//                 right = mid;
//             }
//             else
//             {
//                 left = mid + 1;
//             }
//             continue;
//         }
//         else if (group == 3 && i == n1 - 1)
//         {
//             return left;
//         }
//     }
//     return left;
// }

// int sum_num(initializer_list<int> a)
// {
//     int s = 0;
//     for (auto i : a)
//     {
//         s += i;
//     }
//     return 0;
// }

// int main(int argc, char *argv[])
// {
//     int n = 6;
//     int a[n] = {2, 2, 3, 4, 5, 1};
//     sort(a, a + n);
//     int max = a[n - 1], sum = sum_num({a[0], a[1], a[2], a[3], a[4], a[5]});
//     int b[sum - max];
//     for (int i = max; i < sum; i++)
//     {
//         b[i] = i;
//     }
//     bin_search(a, b, n, sum - max, max);
//     return 0;
// }



//不会做哈，以后再看