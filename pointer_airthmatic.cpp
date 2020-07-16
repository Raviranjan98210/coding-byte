#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 10;
    int *ptr = &i;
    cout << ptr << endl;

    ptr = ptr + 1;       //This will not increment the value of rather it will move 4 bytes that is to the next integer block.
    cout << ptr << endl; //adding 4bytes to previous git
}