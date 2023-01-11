#include <iostream>
using namespace std;
int main()
{
    int numOfContest, solution, ans = 0, final = 0;
    cin >> numOfContest;
    for (int i = 0; i < numOfContest; i++)
    {
        ans = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> solution;
            if (solution == 1)
                ans++;
        }
        if (ans >= 2)
            final++;
    }
    cout << final;
}