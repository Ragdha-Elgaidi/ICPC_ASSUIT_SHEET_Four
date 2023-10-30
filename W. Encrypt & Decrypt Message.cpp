#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/", 
	original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789",
		s;
	int q, z = 0, index=0;

	cin >> q >> s;

	if (q == 1)
	{
		for (int i = 0; i < s.size(); i++)
		{
			for (int z = 0; z < original.size(); z++)
			{
				if (s[i] == original[z])
				{
					index = z;
					break;
				}
			}
			cout << key[index];
		}
	}
	else if (q == 2)
	{
		for (int i = 0; i < s.size(); i++)
		{
			for (int z = 0; z < key.size(); z++)
			{
				if (s[i] == key[z])
				{
					index = z;
					break;
				}
			}
			cout << original[index];
		}
	}
}
