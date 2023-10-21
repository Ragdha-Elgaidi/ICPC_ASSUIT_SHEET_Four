#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    string S, q;
    cin >> S;

    int l, r;
    char x;

    while (Q--)
    {
        cin >> q;

        if (q == "pop_back")
        {
            S.pop_back();
        }
        else if (q == "front")
        {
            cout << S.front() << endl;
        }
        else if (q == "back")
        {
            cout << S.back() << endl;
        }
        else if (q == "sort")
        {
            cin >> l >> r;

            sort(S.begin() + min(l, r) - 1, S.begin() + max(l, r));
        }
        else if (q == "reverse")
        {
            cin >> l >> r;

            reverse(S.begin() + min(l, r) - 1, S.begin() + max(l, r));
        }
        else if (q == "print")
        {
            int pos;
            cin >> pos;

            cout << S[pos - 1] << endl;;
        }
        else if (q == "substr")
        {
            cin >> l >> r;

            for (int i = min(l, r) - 1; i < max(l, r) ; i++)
            {
                cout << S[i];
            }
            cout << endl;
        }
        else if (q == "push_back")
        {
            cin >> x;

            S.push_back(x);
        }
    }
}
