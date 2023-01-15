#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        string S;

        cin >> S;

        int x = S.find("010");
        int y = S.find("101");

        if (y != string::npos || x != string::npos)
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }
    return 0;
}
