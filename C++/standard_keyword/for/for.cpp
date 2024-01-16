#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int a[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main(int argc, char *argv[])
{
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int &i : a)
    {
        i *= 2;
        cout << i << " ";
    }
    cout << endl;
    for (int i : a)
    {
        cout << i << " ";
    }

    return 0;
}