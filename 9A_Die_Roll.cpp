#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1, num2, big, ans, res1, res2;
    cin >> num1 >> num2;

    big = max(num1, num2);
    ans = 6 - big + 1;
    for (int i = 1; i <= ans; i++)
    {
        if (ans % i == 0 && 6 % i == 0)
        {
            res1 = ans / i;
            res2 = 6 / i;
        }
    }
    cout << res1 << "/" << res2 << endl;
}
