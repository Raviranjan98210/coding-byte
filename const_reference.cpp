#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 10;
    int const &j = i; //Here we made the reference variable j constant that means j does't change the value of i it can only read the value stored in i
    i++;              // We can do this
    // j++;              // But we can't do this as it is constant reference variable
    cout << j << endl;

    int const i = 10; // Now 'i' has read-only permission so it can't be change
    int &k = i;       // as 'i' has read-only propety and k is referencing it so k also won't have ability to change the value
}