#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p = 20;
    int *intptr = &p;
    cout << "size of pointer is " << sizeof(intptr) << " byte" << endl;

    char q = 'r';
    char *charptr = &q;
    cout << "Size of pointer is " << sizeof(charptr) << " byte" << endl;

    //Above statement will print size of pointer is 8 byte, because pointers are ultimately storing the address.
}