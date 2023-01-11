#include <iostream>
using namespace std;
#include <set>
int main()
{
    string name;
    set<char> mySet;
    cin >> name;
    for (int i = 0; i < name.length(); i++)
    {
        mySet.insert(name[i]);
    }
    if (mySet.size() % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}