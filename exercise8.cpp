#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int b = 20;
    *q = &b;
    (*p)++;
    cout << a << " " << b << endl;

    // cout << p << endl;
    // cout << &a << endl;
    // cout << "******************" << endl;
    // cout << a << endl;
    // cout << *p << endl;
    // cout << "******************" << endl;
    // cout << q << endl;
    // cout << &p << endl;
    // cout << "******************" << endl;
    // cout << *q << endl;
    // cout << p << endl;
    // cout << "******************" << endl;
    // // *q = &b; //Here q would not store the address of b as q is double pointer it can only accept the address of integer pointer type block that is
    // // int * someVariable
    // cout << q << endl;
    // cout << &b << endl;
    // cout << (*p)++ << endl;
    // cout << *p << endl;
    // cout << a << endl;

    int i = 10;
    int *p = &i;
    p = p + 1;
    cout << *p << endl;
}