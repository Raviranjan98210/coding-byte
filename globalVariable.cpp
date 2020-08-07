#include <bits/stdc++.h>
using namespace std;
int a;

void react()
{
    a = a + 5;
    cout << a << endl; //18
}

void angular()
{
    a = a + 2;
    cout << a << endl; //13
    react();
}

void vue()
{
    ++a;
    cout << a << endl; //11
    angular();
}

int main()
{
    a = 10;
    vue();
    cout << a << endl; //18
}

//11 13 18 18