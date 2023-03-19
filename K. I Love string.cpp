#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S, T;

	int  t = 0;

	cin >> t;

	while (t--)
	{
		cin >> S >> T;

		int Size_S = S.size();
		int Size_T = T.size();
		int n =max( Size_S , Size_T);
		
		for (int i = 0; i <n; i++)
		{
			if (Size_S >i)
			{
				cout << S[i];
			}
			if (Size_T > i)
			{
				cout << T[i];
			}
		}
		cout << endl;
	}
	return 0;
}
