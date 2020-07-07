/*
Input File: tripin.txt
Output File: tripout.txt
Time Limit: 1 second

In this somewhat silly problem, you must write a program that reads in a list of non-negative integers and identifies all the 'triples' - 
the multiples of three. For the purposes of this problem, a triple is defined as any number that can be expressed in the form (3 * integer) - 
so 0 and 3 are also considered to be triples.

To make things a little more complicated, once you identify all the triples you will need to output their locations in the original list.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if ((arr[i]) % 3 == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Nothing here!";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] % 3) == 0)
            {
                cout << i + 1 << " ";
            }
        }
    }
}