#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

/*
容器 List(双向链表容器)
*/

void t1()
{
    list<int> l1{1, 2, 3, 4, 5}; // 创建一个int类型的双向链表l1，并初始化为{1, 2, 3, 4, 5}
    for_each(l1.begin(), l1.end(), [](int i)
             { cout << i << " "; });
    cout << endl;
    cout << *l1.begin() << endl;            // 输出链表中第一个元素
    cout << *l1.rbegin() << endl;           // 输出链表中最后一个元素
    cout << l1.empty() << endl;             // 判断链表是否为空，输出布尔值
    cout << l1.size() << endl;              // 输出链表的长度
    cout << l1.max_size() << endl;          // 输出链表的最大长度
    cout << l1.front() << endl;             // 输出链表的第一个元素
    l1.assign({1, 2, 3, 4, 5, 6, 7, 8, 9}); // 重新给链表赋值为{1, 2, 3, 4, 5, 6, 7, 8, 9}
    for_each(l1.begin(), l1.end(), [](int i)
             { cout << i << " "; });
    cout << endl;
    l1.remove_if([](int i)
                 { return i % 2 == 0; });
    l1.unique(); // 去除链表中的重复元素
    for_each(l1.begin(), l1.end(), [](int i)
             { cout << i << " "; });
}

void t2()
{
    list<int> l1{1, 2, 3, 4, 5};                                   // 创建一个int类型的双向链表l1，并初始化为{1, 2, 3, 4, 5}
    list<int> l2{1, 2, 3, 4, 5};                                   // 创建一个int类型的双向链表l2，并初始化为{1, 2, 3, 4, 5}
    list<int> l3;                                                  // 创建一个int类型的双向链表l3
    l3.resize(l1.size() + l2.size());                              // 设置l3的大小为l1和l2的大小之和
    merge(l1.begin(), l1.end(), l2.begin(), l2.end(), l3.begin()); // 将l1和l2合并到l3中，保持原有顺序
    for_each(l3.begin(), l3.end(), [](int i)
             { cout << i << " "; });
    cout << endl;
    l1.splice(l1.end(), l2, l2.begin(), l2.end()); // 将l2中的元素插入到l1的末尾
    for_each(l1.begin(), l1.end(), [](int i)
             { cout << i << " "; });
    cout << endl;
    cout << "l1.size=" << l1.size() << endl; // 输出l1的长度
    for_each(l2.begin(), l2.end(), [](int i)
             { cout << i << " "; });
    cout << "l2.size=" << l2.size() << endl; // 输出l2的长度
    l3.push_front(1);                        // 在l3的开头插入元素1
    l3.unique();                             // 去除l3中的重复元素
    for_each(l3.begin(), l3.end(), [](int i)
             { cout << i << " "; });
}

int main(int argc, char *argv[])
{
    // t1();
    t2();
    return 0;
}