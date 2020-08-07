#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 10;
    i = 11;
    cout << i << endl; // Here we can easily reasign the value of i

    //const int or int const using this keyword we can't change the value

    int const j = 100;
    // j++; // We can't do this as it is read-only variable which means we can't change we can only read it.
    cout << j << endl;
}