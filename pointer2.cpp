#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr = 0; //This is pointing to the null
    int a = 10;
    *ptr = a;             // we can not assign any value to the pinter pointing to null.
    cout << *ptr << endl; //Output would be error(segmentation fault, because pointer is trying to write, which is not allowend in this case.)
}