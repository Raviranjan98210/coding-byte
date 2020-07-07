/*Input File: listin.txt
Output File: listout.txt
Time Limit: 1 second
Memory Limit: 64MB

The face of electronic gaming has changed dramatically over the past few decades. Forget text adventure games and rickety Asteroids cabinets -
these days it's all about ultra-realistic graphics, motion-sensing wands and high-end CPUs. But despite all this, simple games with basic rules
and crisp art are doing as well as ever. One such game is Friendlist, a multiplayer game requiring nothing more than an internet browser to 
play.

In Friendlist, players add each other as 'friends' based on looks, reputation, or even real life connections. (Friendship is mutual: if Alice 
has Bob as a friend, then Bob has Alice as a friend too. Of course, people cannot be friends with themselves.) As the game progresses, dedicated
players can grind their way through quiz-like minigames in order to impress their peers. However, adding 'friends' to one's friendlist remains
the cornerstone of the game. The bigger the friendlist, the better the player.

The object of the game is to have the biggest friendlist (that is, the most friends). Your task here is to take a list of Friendlist friendships
and determine the winner. There may be more than one person tied for first place: if so, your program should list them all.

Input
The first line of input will contain the integer f, 1 <= f <= 1,000,000.

Each of the following f lines will be of the form a b, where a and b are different player IDs. This indicates that player #a is friends with
 player #b, and vice versa. All player IDs are integers between 0 and 1000 inclusive.

(Note that no friendship will ever be listed twice: for example, if "2 5" is one of the lines in the input, then neither "2 5" nor "5 2" will
 appear anywhere else in the input.)

Output
Output should consist of all the player IDs that are tied for biggest friendlist. These IDs should be given in ascending order.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[1001];
    cin >> n;
    for (int i = 0; i < 1001; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int p1, p2;
        cin >> p1 >> p2;
        arr[p1]++;
        arr[p2]++;
    }
    int max = 0;
    for (int i = 0; i < 1001; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 1001; i++)
    {
        if (arr[i] == max)
        {
            cout << i << endl;
        }
    }

    return 0;
}
