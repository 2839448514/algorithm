#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
#include <algorithm>
#include <utility>
using namespace std;

/*
模板 pair(对组)
*/

void t1()
{
    pair<string, int> p1("小明", 18);
    pair<string, int> p2 = make_pair("小红", 20);
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    set<int>s1({1, 2, 3, 4, 5});
    pair<set<int>::iterator,bool> ret = s1.insert(6);
    if (ret.second)
    {
        cout << "插入成功" << endl;
    }
    else
    {
        cout << "插入失败" << endl;
    }
}

int main(int argc, char *argv[])
{
    t1();
    return 0;
}