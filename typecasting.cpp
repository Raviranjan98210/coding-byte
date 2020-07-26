#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 65;
    char ch = i;        // Here implict typecasting is taking place.
    cout << ch << endl; //It will print A

    //But in case of pointer it doesn't work same that meand we have to explicitly tell the compiler to typecast
    int *p = &i;
    char *pc = (char *)p; //Here we told compiler to convert integer type variable into character type that now pc will read only 1Byte out of 4Byte

    cout << *p << endl;                       // 65
    cout << *pc << endl;                      //A
    cout << "*(pc + 1)" << *(pc + 1) << endl; //will print null that is nothing
    cout << "*(pc + 2)" << *(pc + 2) << endl; //will print null
    cout << "*(pc + 3)" << *(pc + 3) << endl; //should print A as pointer will move to 4th byte where 65 should be there but in case of pointer sign bits

    //comes at rightmost place and the value comes at leftmost place show this will print null
}