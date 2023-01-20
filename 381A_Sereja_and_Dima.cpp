#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    int n, ans = 0, Sereja = 0, Dima = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;

    while (l <= r)
    {
        bool cycle = true;
        if (cycle == true)
        {
            if (arr[l] <= arr[r])
            {
                Sereja += arr[r];
                r--;
            }
            else
            {
                Sereja += arr[l];
                l++;
            }
            cycle = false;
        }
        if (l > r)
            break;

        if (cycle == false)

        {
            if (arr[l] < arr[r])
            {
                Dima += arr[r];
                r--;
            }
            else
            {
                Dima += arr[l];
                l++;
            }
        }
    }
    cout << Sereja << endl;
    cout << Dima;
}