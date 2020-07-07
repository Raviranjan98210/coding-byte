/*Input File: encyin.txt
Output File: encyout.txt
Time Limit: 1 second

Once again it is quiz night at the My Very First Encyclopedia Appreciation Society. For week after week, you have turned up to these quizzes,
deftly answering question after question about zoo animals and days of the week, only for someone else to answer all the obscure bonus-round
questions at the end, snatching first place and leaving you with nothing but a 'Nice Try!' sticker.Dejected and disheartened, you are sitting 
at home musing upon your past failures, when a thought occurs to you. Could it be...? Riffling through months of angrily scribbled notes, you 
confirm your sneaking suspicion - the bonus questions follow a super-simple pattern! Your heart skips a beat. Every question in every bonus 
round of every quiz you've sat through has been phrased in the form: "How many words are there on page x of the My Very First Encyclopedia?" 
Normally you would consider that a little unlikely, even contrived, but not today - today you have a Mars bar to win.With infinite care you 
compile a list of page numbers and their corresponding word counts. Others in your place mighttry to memorise the list, but no, your plan is 
far more hi-tech: first, you will write a program that can answer these questions for you; then, you will sneak your trusty laptop into the
quiz, and proceed to blitz the competition.All that's left is for you to actually write the program. The task seems simple: it has to take your
 list of numbers and tonight's bonus questions, and - quietly - print out the correct answers for you.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        int page;
        cin >> page;
        cout << arr[page - 1] << endl;
    }
    return 0;
}