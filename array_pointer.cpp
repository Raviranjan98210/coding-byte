#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]; //this will create a block 4o byte.
    cout << sizeof(a) << endl;
    cout << a << endl;  // This will store the address of address of 0th element of array
    cout << &a << endl; //This will also store the address of 0th element of array

    // a can behave like pointers to its on block example.

    a[0] = 10;
    a[1] = 20;

    cout << *a << endl;       //this will dereference the value at 0th index of array
    cout << *(a + 1) << endl; //This will dereference the value at 1st index of array

    // conclusion : we can say that 'a' is behaving like pointer
}