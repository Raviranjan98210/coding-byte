#include <bits/stdc++.h>
using namespace std;
bool is_sorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    bool isSmallerOutput = is_sorted(a + 1, size - 1);
    if (!isSmallerOutput)
    {
        return false;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int *arr = new int[n];

    cout << "Enter the element of array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Given array is sorted " << is_sorted(arr, n) << endl;
}