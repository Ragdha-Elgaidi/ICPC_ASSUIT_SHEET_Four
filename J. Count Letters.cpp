#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;

	cin >> S;

	int size_S = S.size();
	int freq[123]{ 0 };

	for (int i = 0; i < size_S; i++)
	{
		freq[S[i]]++;
	}

	for (int i = 0; i < 123; i++)
	{
		if (freq[i])
		{
			cout << (char)i << " : " << freq[i] << endl;
		}
	}
	return 0;
}
