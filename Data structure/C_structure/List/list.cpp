#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

// list的实现(手写链表)
// 动态链表

typedef struct Node
{
    int data;
    Node *next;

} list;

// 创建链表
list *LIST(int n)
{
    list *head, *p, *now;
    head = new list;
    head->data = 1;
    head->next = NULL;
    now = head;
    for (int i = 2; i <= n; i++)
    {
        p = new list;
        p->data = i;
        p->next = NULL;
        now->next = p;
        now = p;
    }
    // now->next = head;//循环链表
    return head;
}
int main(int argc, char *argv[])
{
    list *head = LIST(10);
    for (list *l = head; l->next != NULL; l = l->next)
    {
        cout << l->data << " ";
    }
    return 0;
}
