
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int flag = 0;
    while (cin >> s)
    {
        reverse(s.begin(), s.end());

        if (flag)
        {
            cout << " ";
        }

        flag = 1;
        cout << s;
    }
}
