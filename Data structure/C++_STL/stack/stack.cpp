#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

/*
容器stack(栈)
只有栈顶元素可以被访问，因此栈不允许被遍历
*/
void t1()
{
    stack<int> s1;
    cout << s1.empty() << endl;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout<<s1.size()<<endl;
    while (!s1.empty())
    {
        cout << s1.top() <<" ";
        s1.pop();
    }
    cout<<s1.empty()<<endl;
}

void t2()
{
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);
    s1.push(10);
    stack<int> s2(s1);
    s2.pop();
    cout<<s1.size()<<endl;
    cout<<s2.size()<<endl;
    s1.swap(s2);
    cout<<s1.size()<<endl;
    cout<<s2.size()<<endl;
} 
int main(int argc, char *argv[])
{
    //t1();
    t2();
    return 0;
}