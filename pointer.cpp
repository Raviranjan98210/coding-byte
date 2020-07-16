#include <bits/stdc++.h>
using namespace std;

int main()
{
    float f = 10.25;
    float p = 2.25;

    float *ptr = &f; //started pointing variable f so if change the value of ptr it will reflect in variable f.
    (*ptr)++;        // increase the value of f =11.25
    cout << *ptr << " " << f << endl;
    *ptr = p; // Now pointer *ptr=2.25, varable f=2.25(as pointer is pointing this variable) and p has already value 2.25
    cout << *ptr << " " << f << " " << p << endl;
    //output would be 2.25 2.25 2.25
}
