#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <ctime>
#include <vector>
using namespace std;

// 尺取法例1(反向扫描)
/*
问题1.输入n(n<=100000)个整数，放在数组a[]中。找出其中的两个数，它们之和等于整数m，所有整数都是int型。
*/
/*
解答：(1)用二重循环暴力破解，枚举所有取数方法，复杂度为O(n^2)。超时，暴力法不需要排序。
(2)二分法。先对数组从小到大排序，复杂度为O(nlogn)。然后从头到尾处理数组中的每一个元素a[i]，在大于a[i]的元素中二分查找一个等于m-a[i]的数，复杂度也为O(nlogn)。两部分相加，复杂度为O(nlogn)。
(3)哈希。分配一个哈希空间s，把n个数放进去。逐个检查a[]中的每个数，检查m-a[i]在s中是否有值，如果有，则有一个答案。复杂度为O(n)。
(4)尺取法。先对数组从小到大排序。然后设置两个变量i，j，分别指向头和尾，i初值为0，j初值为n-1。然后i和j逐渐向中间移动，检查a[i]+a[j],如果大于m，j--，如果小于m，i++，如果等于m，则输出a[i]和a[j]，并退出循环。检查的复杂度为O(n)。总复杂度为O(nlog₂n)。
*/

vector<int>* random_array(int n)
{
    srand(time(0));
    vector<int> *v=new vector<int>;
    for (int i = 0; i < n; i++)
    {
        (*v).push_back(rand() % 1000);
    }
    return v;
}

void find_num(vector<int> *a, int m){
    sort(a->begin(), a->end());
    vector<int>::iterator i=(*a).begin(),j=(*a).end()-1;
    while(i<j){
        int sum=(*i)+(*j);
        if(sum>m){
            j--;
        }
        if(sum<m){
            i++;
        }
        if(sum==m){
            cout<<*i<<" "<<*j<<endl;
            break;
        }
    }
}
int main(int argc, char *argv[])
{
     int n=100;
    int m=100;
    vector<int> *a=random_array(n);
    find_num(a,m);
    return 0;
}