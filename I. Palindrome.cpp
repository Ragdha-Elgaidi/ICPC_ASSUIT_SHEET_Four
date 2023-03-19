#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;

	getline(cin, S);

	int size_S = S.size();

	bool if_true = 1;

	for (int i = 0 ; i < size_S/2; i++)
	{
		if (S[i] == S[size_S - i - 1])
			if_true = 1;
		else
			if_true = 0;

	}
	if (if_true)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
