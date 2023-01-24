#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;
int main()
{

    string word;
    int upper = 0, lower = 0;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        int w = word[i];
        if (isupper(w))
            upper++;
        if (islower(w))
            lower++;
    }
    if (upper > lower)
    {
        for (int i = 0; i < word.length(); i++)
        {
            word[i] = toupper(word[i]);
        }
        cout << word;
    }
    if (lower >= upper)
    {

        for (int i = 0; i < word.length(); i++)
        {
            word[i] = tolower(word[i]);
        }
        cout << word;
    }
}
