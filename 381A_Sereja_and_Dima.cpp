#include <iostream>
using namespace std;
int main()
{
    int n, min, j;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        min = arr[i];
        j = i - 1;
        for (; j >= 0 && arr[j] > min; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = min;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}