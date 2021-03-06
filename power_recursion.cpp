// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.

// Constraints : 1 <= x <= 30 0 <= n <= 30
#include <bits/stdc++.h>
using namespace std;
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * power(x, n - 1);
}
int main()
{
    int x, n;
    cin >> x >> n;
    int result = power(x, n);
    cout << result;
}