#include <iostream>
using namespace std;

int main()
{
    int num, ans = 0;

    cin >> num;

    int home[num];
    int guest[num];

    for (int i = 0; i < num; i++)
    {
        cin >> home[i] >> guest[i];
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (home[i] == guest[j])
                ans++;
        }
    }
    cout << ans;
}