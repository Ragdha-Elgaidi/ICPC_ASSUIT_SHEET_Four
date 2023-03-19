#include<iostream>
#include<string>
using namespace std;

int main()
{
	string S;

	cin >> S;

	int size = S.size();
	int Sum = 0;

	for (int i=0; i < size; i++)
	{
		Sum += S[i] - '0';
	}

	cout << Sum;
	return 0;
}
