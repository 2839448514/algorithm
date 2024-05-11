#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct data
{
    int val;
    int id;
};
// 离散化

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    vector<data> D(n + 1, {0, 0});
    vector<int> A(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> D[i].val;
        D[i].id = i;
    }
    sort(D.begin() + 1, D.end(), [](data a, data b)
         { return a.val < b.val; });
    for (int i = 1; i <= n; i++)
    {
        A[D[i].id] = i;
        if (D[i].val == D[i - 1].val)
        {
            A[D[i].id] = A[D[i - 1].id];
        }
    }
    for(int i = 1; i <= n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}