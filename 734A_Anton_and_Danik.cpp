#include <iostream>
using namespace std;
int main()
{
    int numOfGame, ansA, ansD = 0;
    string keyword;
    cin >> numOfGame;
    cin >> keyword;
    for (int i = 0; i < numOfGame; i++)
    {
        if (keyword[i] == 'A')
            ansA++;
        else
            ansD++;
    }
    if (ansA > ansD)
        cout << "Anton";
    else if (ansA < ansD)
        cout << "Danik";
    else
        cout << "Friendship";
}