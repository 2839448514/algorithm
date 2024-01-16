#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
容器 vector
迭代器 vector::iterator
遍历 for_each
*/

// vector 基本用法与输出
void t1()
{
    vector<int> v;  // 创建一个int类型的vector容器
    v.push_back(1); // 向容器中添加元素1
    v.push_back(2); // 向容器中添加元素2
    v.push_back(3); // 向容器中添加元素3
    cout << "for循环调用:";
    for (vector<int>::iterator v1 = v.begin(); v1 != v.end(); v1++) // 使用for循环遍历vector容器
    {
        cout << *v1 << " "; // 输出当前迭代器指向的元素
    }
    cout << endl
         << "STL提供算法调用:";
    for_each(v.begin(), v.end(), [](int v1) // 使用for_each算法遍历vector容器并调用lambda表达式
             { cout << v1 << " "; });
    cout << endl
         << "auto自动推导调用:";
    for (auto v1 : v) // 使用auto推导遍历vector容器
    {
        cout << v1 << " "; // 输出当前元素
    }
    cout << endl;
}

// vector存放自定义类型// vector存放自定义类型
class A
{
public:
    int a; // 类成员变量a
    int b; // 类成员变量b
    A(int a, int b)
    {
        this->a = a; // 构造函数，初始化变量a
        this->b = b; // 构造函数，初始化变量b
    }
};
void t2()
{
    vector<A> v;                                                  // 创建一个A类型的vector容器
    A a1(1, 2);                                                   // 创建A类型对象a1
    A a2(2, 3);                                                   // 创建A类型对象a2
    A a3(3, 4);                                                   // 创建A类型对象a3
    A a4(4, 5);                                                   // 创建A类型对象a4
    v.push_back(a1);                                              // 向容器中添加对象a1
    v.push_back(a2);                                              // 向容器中添加对象a2
    v.push_back(a3);                                              // 向容器中添加对象a3
    v.push_back(a4);                                              // 向容器中添加对象a4
    for (vector<A>::iterator v1 = v.begin(); v1 != v.end(); v1++) // 使用for循环遍历vector容器
    {
        cout << "v1.a=" << v1->a << " "
             << "v1.b=" << v1->b << endl; // 输出当前迭代器指向的对象的a和b成员变量
    }
}

// vector嵌套vector
void t3()
{
    //vector<initializer_list<int>> v;
    vector<vector<int>> v; // 创建一个int类型的vector容器
    v.push_back({1, 2, 3});
    v.push_back({4, 5, 6});
    v.push_back({7, 8, 9, 10});
    for (vector<vector<int>>::iterator v1 = v.begin(); v1 != v.end(); v1++) // 使用for循环遍历vector容器
    {
        for (vector<int>::iterator v2 = v1->begin(); v2 != v1->end(); v2++) // 使用for循环遍历vector容器
        {
            cout << *v2 << " "; // 输出当前迭代器指向的元素
        }
        cout << endl;
    }
}
int main(int argc, char *argv[])
{
    // t1();
    // t2();
    // t3();

    return 0;
}