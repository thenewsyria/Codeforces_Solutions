#include <iostream>
using namespace std;
int main()
{

    int n;
    int ans, k = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            k += arr[i];
        }
        if (arr[i] == -1)
        {
            if (k == 0)
                ans++;
            else
                k--;
        }
    }
    cout << ans;
}