#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

/*
容器 Set(集合)  元素自动排序
@(set):不允许有相同元素
@(multiset):允许有相同元素
*/

void set_t1()
{
    set<int> s1({1, 2, 4, 5, 6, 7, 8, 9, 10}); // 创建一个set对象，初始化元素
    s1.insert(3);                              // 插入一个元素
    for_each(s1.begin(), s1.end(), [](int i)
             { cout << i << " "; }); // 遍历set对象，输出每个元素
    cout << endl;
    set<int> s2 = s1;                 // 复制一个set对象
    cout << *s2.find(2) << endl;      // 输出第一个值为2的元素
    cout << s2.size() << endl;        // 输出set对象的大小
    cout << s2.empty() << endl;       // 输出set对象是否为空
    s1.erase(s1.begin(), --s1.end()); // 删除从第一个元素到倒数第二个元素之间的所有元素
    s1.swap(s2);                      // 交换两个set对象
    for_each(s1.begin(), s1.end(), [](int i)
             { cout << i << " "; });
    cout << endl;
    for_each(s2.begin(), s2.end(), [](int i)
             { cout << i << " "; });
    cout << endl;
    cout << *s1.erase(s1.begin()) << endl; // 删除第一个元素并返回下一个元素的迭代器，输出删除后的元素
    cout << s1.count(3) << endl;           // 输出set对象中值为3的元素的个数
}

void multiset_t1()
{
    multiset<int> s1({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}); // 创建一个multiset对象，初始化元素
    s1.insert({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});        // 插入一个包含多个相同元素的set对象
    for_each(s1.begin(), s1.end(), [](int i)
             { cout << i << " "; }); // 遍历multiset对象，输出每个元素
    cout << endl;
}
int main(int argc, char *argv[])
{
    //set_t1();
    multiset_t1();
    return 0;
}