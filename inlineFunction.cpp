#include <bits/stdc++.h>
using namespace std;

int inline max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int num1, num2;
    cout << "Enter two number and get the maximum one" << endl;

    cin >> num1 >> num2;

    //Method-1 this method is but lengthy and less readable.
    int c;
    // if (num1 > num2)
    // {
    //     c = num1;
    // }
    // else
    // {
    //     c = num2;
    // }

    // Method-2 using ternary operator, less code and much easier to read code in comparison of Method 1

    // c = (num1 > num2) ? num1 : num2;

    // cout << c << endl;

    //Method-3 using function It will increase the readality of code even more better.But what if we have to find max number many times so we'll call the
    // function many time and copying of argument and perforiming operation on those arguments till then caller will be paushed till it gets max value from
    // the function and then assingn it some variable here c. SO there is hell lot of process going on everytime just for single line of code. So for solving
    // this inline concept is introduced which copies the lines of code written in the function block at compile time at every from which function is being
    //  invoked but compier consider upto 3 lines as inline otherwise it refuses to make function inline and doesn't make any sense copying many lines as
    // it makes files bulky.

    c = max(num1, num2);
    cout << "Maximum value is: " << c << endl;
}