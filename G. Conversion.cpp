#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string S;

    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == ',')
            cout<<" ";
        else if(S[i] >= 65 && S[i] <= 90)
           cout<<char( S[i] + ' ');
        else if (S[i] >= 97 && S[i] <= 122)
           cout<<char( S[i] - ' ');
    }
    return 0;
}
