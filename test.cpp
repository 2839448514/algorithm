#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void dfs(vector<int> &v, int p, int q)
// {
//     if (p == q)
//     {
//         for_each(v.begin(), v.end(), [](int v1)
//                  { cout << v1 << " "; });
//         cout << endl;
//     }
//     else
//     {
//         for (int i = p; i <= q; i++)
//         {
//             swap(v[p], v[i]);
//             dfs(v, p + 1, q);
//             swap(v[p], v[i]);
//         }
//     }
// }

class A{
    public:
    int a=1;
    void print(){
        cout<<a<<endl;
    }
};
class A1:public A{
    public:
      void print(){
        cout<<"123"<<endl;
    }
};

int main(int argc, char *argv[])
{
    A1 w;
    w.print();
}