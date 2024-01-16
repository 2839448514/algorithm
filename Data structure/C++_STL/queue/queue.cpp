#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

/*
容器 Queue(队列)

*/

void t1()
{
    queue<int> q1;  // 创建一个队列q1，存储整型元素
    for (int i = 0; i < 10; i++)
    {
        q1.push(i);  // 将元素入队
    }
    cout << endl
         << q1.size() << endl;  // 输出队列长度
    cout << q1.back() << endl;  // 输出队列尾部元素
    cout << q1.front() << endl;  // 输出队列头部元素
    while (!q1.empty())
    {
        cout << q1.front() << " ";  // 输出队列头部元素
        q1.pop();  // 将队首元素出队
    }
    cout << endl;
}
void t2(){
    queue<int> q1;
    for (int i = 0; i < 10; i++)
    {
        q1.push(i);
    }
    queue<int>q2(q1);
    if(q1==q2){
        cout<<"q1==q2"<<endl;
    }
}
int main(int argc, char *argv[])
{
    //t1();
    t2();
    return 0;
}