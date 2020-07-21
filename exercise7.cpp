#include <bits/stdc++.h>
using namespace std;

int main()
{
    char b[] = "xyz";
    char *c = &b[0];
    c = c + 2;
    cout << c << endl;
}