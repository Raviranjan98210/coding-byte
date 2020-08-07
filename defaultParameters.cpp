#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0)
{
    return a + b + c + d;
}

int main()
{
    // We can use the default parameter to make function multifunctional that a function can work in multiple scenarios
    // example we can a function which can be able to sum 2 numbers 3 numbers and 4 numbers depands what parameter we pass.

    int twoNum = sum(10, 20);
    int threeNum = sum(10, 20, 30);
    int fourNum = sum(10, 20, 30, 40);

    cout << twoNum << " " << threeNum << " " << fourNum << endl;
}