#include <bits/stdc++.h>
using namespace std;

void func(int i, int &j, int p)
{
    i++;
    j++;
    p++;
    cout << i << " " << j << " " << p << endl;
}

int main()
{
    int i = 10;
    int j = 6;
    int &p = i; // p hs reference of i so if wither p or i will change, change will reflect for both the variable.
    func(i, j, p);
    cout << i << " " << j << " " << p; //12 7 12
}