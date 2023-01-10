#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int numOfHorseshoes, size = 4;
    int ans = 0;
    int cur[size];
    for (int i = 0; i < size; i++)
    {
        cin >> numOfHorseshoes;
        cur[i] = numOfHorseshoes;
    }
    sort(cur, cur + size);
    for (int i = 0; i < size; i++)
    {

        if (cur[i] == cur[i + 1])
        {
            ans += 1;
        }
    }
    cout << ans;
}