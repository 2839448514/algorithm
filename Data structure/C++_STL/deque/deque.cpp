#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

/*
容器deque(双端数组)
*/

void t1()
{
    deque<int> d1;
    d1.push_back(1);
    d1.push_front(0);
    for (deque<int>::iterator d11 = d1.begin(); d11 != d1.end(); d11++)
    {
        cout << *d11 << " "; // 输出当前迭代器指向的元素
    }
    cout << endl;
    deque<int> d2(d1);
    d2.insert(d2.end(), 3, 4);
    for (deque<int>::iterator d22 = d2.begin(); d22 != d2.end(); d22++)
    {
        cout << *d22 << " "; // 输出当前迭代器指向的元素
    }
    cout << endl;
    d2.resize(10, 9);
    for (deque<int>::iterator d22 = d2.begin(); d22 != d2.end(); d22++)
    {
        cout << *d22 << " "; // 输出当前迭代器指向的元素
    }
    cout << endl;
    deque<int> d3;
    d3.assign(d2.begin(), d2.end());
    for (deque<int>::iterator d33 = d3.begin(); d33 != d3.end(); d33++)
    {
        cout << *d33 << " "; // 输出当前迭代器指向的元素
    }
    cout << endl;
}

void t2()
{
    deque<int> d1;
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    for (deque<int>::iterator d11 = d1.begin(); d11 != d1.end(); d11++)
    {
        cout << *d11 << " "; // 输出当前迭代器指向的元素
    }
    cout << endl;
    d1.erase(d1.begin(), d1.end() - 2);
    for_each(d1.begin(), d1.end(), [](int v1)
             { cout << v1 << " "; });
    cout << endl;
    d1.clear();
    if (d1.empty())
    {
        cout << "deque is empty" << endl;
    }
    else
    {
        cout << "deque is not empty" << endl;
    }
}

void t3()
{
    deque<int> d1;
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    for_each(d1.begin(), d1.end(), [](int v1)
             { cout << v1 << " "; });
    cout << endl;
    sort(d1.begin(), d1.end(),greater<int>());     // 降序排序  @@@有关greater<int>()请看C++/functional/functional.md
    for_each(d1.begin(), d1.end(), [](int v1)
             { cout << v1 << " "; });
}
int main(int argc, char *argv[])
{
    // t1();
    // t2();
    t3();
    return 0;
}