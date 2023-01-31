#include <iostream>
using namespace std;
int main()
{
    int ans = 0, res = 0;
    int num1, num2;
    cin >> num1 >> num2;
    for (int i = 1; i <= 1000; i++)
    {
        res = num1 * i;
        if (res % 10 == 0 || res % 10 == num2)
        {
            cout << i << endl;
            break;
        }
    }
}
