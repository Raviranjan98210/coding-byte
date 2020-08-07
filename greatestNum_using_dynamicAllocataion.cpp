#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number of element " << endl;
    cin >> n;
    int *p = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (max < p[i])
        {
            max = p[i];
        }
    }
    cout << max;
    delete[] p;
}