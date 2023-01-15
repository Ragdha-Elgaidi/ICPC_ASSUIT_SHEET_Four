#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string S,T;

    cin >> S >> T;

    cout << S.size() << " " << T.size() << endl;
    cout << S + T << endl;

    swap(S[0], T[0]);

    cout << S << " " << T << endl;
    
    return 0;
}
