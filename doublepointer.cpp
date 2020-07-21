#include <bits/stdc++.h>
using namespace std;
void increment1(int **p)
{
    p = p + 1;
    cout << p << endl;
}
int main()
{
    int i = 10;
    int *p = &i;
    int **p2 = &p;

    cout << p2 << endl;
    cout << &p << endl;

    cout << p << endl;
    cout << *p2 << endl;
    cout << &i << endl;

    cout << *p << endl;
    cout << **p2 << endl;
    cout << i << endl;

    increment1(p2);
}