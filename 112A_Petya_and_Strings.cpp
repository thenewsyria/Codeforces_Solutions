#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;

    if (strcasecmp(str1.c_str(), str2.c_str()) == 0)
        cout << "0";
    if (strcasecmp(str1.c_str(), str2.c_str()) < 0)
        cout << "-1";
    if (strcasecmp(str1.c_str(), str2.c_str()) > 0)
        cout << "1";
}