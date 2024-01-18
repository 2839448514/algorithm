#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

/*
map容器(映射)  元素自动排序
@(map):不允许有相同元素
@(multimap):允许有相同元素
*/

void t1()
{
    map<int, string> m1;
    m1 = {{22, "22"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}, {10, "ten"}};
    for (map<int, string>::iterator p1 = m1.begin(); p1 != m1.end(); p1++)
    {
        cout << p1->first << " " << p1->second << " ";
    }
    cout << endl;
    for (auto p1 = m1.begin(); p1 != m1.end(); p1++) // 懒人必备
    {
        cout << p1->first << " " << p1->second << " ";
    }
    cout << endl;
    cout << m1.find(4)->first << " " << m1.find(4)->second << endl; // 注意返回的是个双向迭代器
    cout<<m1.upper_bound(2)->first << " " << m1.lower_bound(2)->second << endl;
}

int main(int argc, char *argv[])
{
    t1();
    return 0;
}