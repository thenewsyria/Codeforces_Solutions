#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int ans = 0;
    string s;
    cin >> s;
    int strt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 97;
        int walk = abs(strt - index);
        if (walk <= 13)
            ans += walk;
        else
            ans += 26 - walk;
        strt = index;
    }
    cout << ans << endl;
}
