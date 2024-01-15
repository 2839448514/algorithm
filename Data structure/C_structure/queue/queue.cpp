#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 手写循环队列
#define N 10
typedef struct Node
{
    int *data;      // 数据指针
    int head, tail; // 队头和队尾
    bool init()     // 初始化函数
    {
        this->data = new int[N]; // 分配内存空间
        if (!this->data)         // 内存分配失败
        {
            return false;
        }
        head = 0, tail = 0; // 将队头和队尾初始化为0
        return true;        // 初始化成功
    }
    int size() // 返回队列当前的元素个数
    {
        return (tail - head + N) % N; // 使用取余确保队头和队尾不越界
    }
    bool empty() // 判断队列是否为空
    {
        if (size() == 0) // 队列元素个数为0
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool push(int e) // 将元素入队
    {
        if ((tail + 1) % N == head) // 队尾和队头重合，队列已满
        {
            return false;
        }
        data[tail] = e;        // 将元素存储到队尾
        tail = (tail + 1) % N; // 更新队尾
        return true;           // 入队成功
    }
    bool pop(int &e) // 弹出元素出队
    {
        if (head == tail) // 队头和队尾重合，队列为空
        {
            return false;
        }
        e = data[head];        // 获取队头元素
        head = (head + 1) % N; // 更新队头
        return true;           // 出队成功
    }
    int front() // 获取队头元素
    {
        return data[head]; // 返回队头元素
    }
} queue;

int main(int argc, char *argv[])
{
    queue q;
    q.init();
    for (int i = 0; i < 10; i++)
    {
        q.push(i); // 将元素入队
    }
    cout << endl
         << q.size() << endl; // 输出队列当前的元素个数
    for (int i = 0; i < 10; i++)
    {
        int e;
        q.pop(e);         // 弹出元素出队
        cout << e << " "; // 输出队头元素
    }
    return 0;
}