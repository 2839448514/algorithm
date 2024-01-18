#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
    int a[10] = {4, 5, 7, 2, 1, 3, 5, 4, 7, 4};
    sort(a, a + 10);
    for_each(a, a + 10, [](int i) { cout << i << " "; });
    return 0;
}