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
        int n = S.size();

        if (n > 10)
        {
            cout << S[0] << n - 2 << S[n - 1] << endl;
        }
        else
        {
            cout << S << endl;
        }
    }
    return 0;
}
