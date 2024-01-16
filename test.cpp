#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << *(v1.end()-1) << endl;
    return 0;
}