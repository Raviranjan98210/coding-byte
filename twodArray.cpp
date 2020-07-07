// Dynamic allocation of 2d array using new keyword and deleting array using delete keyword so that memory leak doesn't happend.
// Q. if column is at even position print the column top to bottom else print the column from bottom to top.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int col = 0; col < n; col++)
    {
        if ((col % 2) == 0)
        {
            for (int row = 0; row < n; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = n - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
    return 0;
}
