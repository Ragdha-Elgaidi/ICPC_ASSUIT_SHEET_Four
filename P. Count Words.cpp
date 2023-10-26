
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s,r;
    getline(cin,s);

    int counter=0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ' && s[i] != '.' && s[i] != ',' && s[i] != '!' && s[i] != '?')
        {
            r += s[i];
        }
        if (( s[i] == ' ' || s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?'|| i == s.size()-1) && r.size() != 0)
        {
            counter++;
            r = "";
        }
    }
    cout << counter;
}
