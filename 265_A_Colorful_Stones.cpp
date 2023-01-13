// #include <iostream>

// using namespace std;

// int main()
// {
//     string str1, str2;
//     int ans = 1;
//     cin >> str1;
//     cin >> str2;

//     for (int i = 0; i < str1.length(); i++)

//     {

//         for (int j = 0; j < str2.length(); j++)
//         {

//             if (str1[i] == str2[j])
//             {

//                 ans++;
//                 // cout << ans;
//                 i++;
//             }
//         }
//         break;
//     }
//     cout << ans;
// }
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int pos = 0;
    for (int i = 0; i < str2.length(); i++)
    {
        if (str1[pos] == str2[i])
        {
            pos++;
        }
    }
    cout << pos + 1;
}