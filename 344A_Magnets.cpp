#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;

    cin >> n;
    int magnet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> magnet[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (magnet[i] != magnet[i + 1])

            ans++;
    }
    cout << ans;
}