
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int n, score=0;
    
    cin >> n >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'V')
        {
            score += 5;
        }
        else if (s[i] == 'W')
        {
            score += 2;
        }
        else if (s[i] == 'X')
        {
            if (i != s.size() - 1)
            {
                s[i + 1] = '0';
            }
        }
        else if (s[i] == 'Y')
        {
            if (i != s.size() - 1)
            {
                s.push_back(s[i + 1]);
                s[i + 1] = '0';
            }
        }
        else if (s[i] == 'Z')
        {
            if (i != s.size() - 1)
            {
                if (s[i + 1] == 'V')
                {
                    score /= 5;
                    s[i + 1] = '0';
                }
                else if (s[i + 1] == 'W')
                {
                    score /= 2;
                    s[i + 1] = '0';
                }
            }
        }

    }
    cout << score;
}
