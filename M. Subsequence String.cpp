#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, x="hello";
    cin >> s;

    int j = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == x[j])
            j++;
    }

    if (j == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
