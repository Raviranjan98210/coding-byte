// find out the number of digit for the given number using recursion
#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int smallAns = n / 10;
    return 1 + solve(smallAns);
}
int main()
{
    int n;
    cin >> n;
    cout << solve(n) << endl;
}