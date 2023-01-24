#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[4];
    int ans = 0;
    string str = "";
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;

    for (int j = 0; j < s.length(); j++)
    {
        str = s[j];

        if (stoi(str) == 1)
            ans += a;
        if (stoi(str) == 2)
            ans += b;
        if (stoi(str) == 3)
            ans += c;
        if (stoi(str) == 4)
            ans += d;
    }

    cout << ans << endl;
}
