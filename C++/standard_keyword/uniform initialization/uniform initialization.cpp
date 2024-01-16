#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;


//initializer_list<int>提供了begin()和end()方法，可以用于迭代器的初始化。 
void print(initializer_list<int> vals)
{
    for (auto i : vals)
        cout << i << " ";
}

class P{
    public:
    P(int,int){
        cout << "P(int,int)" << endl;
    };
    P(initializer_list<int> vals){
        cout << "P(initializer_list<int>)" << endl;
    }

};
/*
日后补充explict keyword
*/




int main(int argc, char *argv[])
{
    int a[5]{1, 2, 3, 4, 5};
    for_each(a, a + 5, [](int i)
             { cout << i << " "; });
    cout << endl;
    print({1, 2, 3, 4, 5});
    cout << endl;
    P p0(1,2);
    P p1({1, 2, 3, 4, 5});
    return 0;
}