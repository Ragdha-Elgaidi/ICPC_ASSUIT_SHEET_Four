#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, ans="";
    cin >> s;

    int r = 0, l = 0, counter=0;

    for (int i = 0; i < s.size(); i++)
    {
        ans += s[i];
        if (s[i] == 'R')
            r++;
        if (s[i] == 'L')
            l++;
        if(l==r)
        {
            counter++;
            ans += '\n';
        }
    }

    cout << counter <<'\n'<<ans;
}
