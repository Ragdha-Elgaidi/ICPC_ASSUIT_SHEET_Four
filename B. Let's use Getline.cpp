#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string S;

	getline(cin,S) ;

	int n = S.size();

	for (int i = 0; i < n; i++)
	{
		if (S[i] == '\\')
			break;
		cout << S[i];
	}
	
	return 0;
}
