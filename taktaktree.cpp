/*The Tremendous Tak-Tak Tree
Input File: taktakin.txt
Output File: taktakout.txt
Time Limit: 1 second

Life is simple in the isolated village of Tak-Tak. Free of the noise and bustle of modern life, the villagers spend their days indulging 
their two great loves: farming and cooking. Their vegetable fields grow strong and tall, and their delicious communal meals brighten many 
an evening.In the centre of the village sits a great sprawling tree, whose long boughs provide shade during the hot summers. The fruit of
the Tak-Tak tree (as it is affectionately known) is renowned for its sweet, succulent taste.Unlike normal plants, the Tak-Tak tree is not
affected by weather or seasons. Instead, its fruits grow according to the cycles of the moon. Every month when the full moon is at its highest,
each fruit on the tree shimmers and turns into two fruits. When the sun rises the villagers wake to find the number of fruits on the tree has
doubled.The villagers are planning a huge feast for this year. On the day of the feast they will remove all the fruit except one from the tree.
This is to be divided equally between the village's eleven inhabitants, as they are a fair people. (No slicing or dicing is allowed - each 
villager must receive a whole number of fruits.) Afterwards the one remaining fruit on the Tak-Tak tree is left to begin the cycle anew.
If the villagers cannot evenly share the fruit with one left over, they shall wait until they can. They are very excited about the feast and 
would like to know how many full moons they must wait.*/

#include <bits/stdc++.h>
using namespace std;

bool canBeEquallyDistribute(int fruits)
{
    return (fruits % 11) == 1 ? true : false;
}

int main()
{
    int fruits;
    cin >> fruits;
    int fullMoons = 0;
    while (!canBeEquallyDistribute(fruits))
    {
        fullMoons++;
        fruits = 2 * fruits;
    }
    cout << fullMoons << " " << fruits << endl;
    return 0;
}
