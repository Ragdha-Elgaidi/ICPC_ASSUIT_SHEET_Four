
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int e = 0, g = 0, p = 0, y = 0, t = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
            e++;
        else if (s[i] == 'g' || s[i] == 'G')
            g++;
        else if (s[i] == 'p' || s[i] == 'P')
            p++;
        else if (s[i] == 'y' || s[i] == 'Y')
            y++;
        else if (s[i] == 't' || s[i] == 'T')
            t++;
    }

    int min1 = min(e, g);
    int min2 = min(p, y);
    int min3 = min(min1, min2);

    cout << min(min3, t) << endl;;
}
