#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string value;
	int cost[26];

	cin >> value;

	for (int i = 0; i < 26; i++)
	{ 
		cin >> cost[i];
	}

	int size = value.size();
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		counter = 0;

		if (value[i] == '?') 
		{
			for (int z = i; z < size; z++)
			{
				if (value[z] == '?') 
				{
					counter++;
				}
				else 
				{
					break;
				}
			}
			// str =  ???????
			if (counter == size) 
			{
				cout << "0" << endl;

				for (int z = 0; z < size; z++)
				{
					cout << "a";
				}
				return 0;
			}
			else 
			{
				// str = ???abcd
				if (i == 0) 
				{
					int max = INT_MAX, index;
					// find first min cost char
					for (int z = 0; z < value[counter] - 97 + 1; z++)
					{ 
						int mycost = abs(cost[value[counter] - 97] - cost[z]);
						if (mycost < max) {
							max = mycost;
							index = z; 
						}
					}
					// replace the question marks with min char
					char c = index + 97;

					for (int z = 0; z < counter; z++)
					{ 
						value[z] = c;
					}

					i += counter; 
				}
				// str = abcd???
				else if (i + counter == size) 
				{
					int ma = INT_MAX, index;
					// find first min cost char
					for (int z = 0; z < value[i - 1] - 97 + 1; z++) 
					{ 
						int mycost = abs(cost[value[i - 1] - 97] - cost[z]);

						if (mycost < ma) 
						{
							ma = mycost;
							index = z;
						}
					}

					char c = index + 97;
					// replace the question marks with min char
					for (int z = i; z < size; z++)
					{ 
						value[z] = c;
					}
					
					break;
				}
				// str = adb??sks
				else
				{
					int ma = INT_MAX, index;
					// loop to find min cost in whole alphabet
					for (int z = 0; z < 26; z++) 
					{
						int mycost = abs(cost[value[i - 1] - 97] - cost[z]) + abs(cost[z] - cost[value[i + counter] - 97]);
					
						if (mycost < ma)
						{
							ma = mycost;
							index = z;
						}
					}

					char c = index + 97;
					// replace the question marks with min char
					for (int z = i; z < i + counter; z++) 
					{ 
						value[z] = c;
					}
					
					i += counter;
				}
			}
		}
	}

	long long finalCost = 0;

	for (int i = 0; i < size - 1; i++) 
	{ 
		finalCost += abs(cost[value[i] - 97] - cost[value[i + 1] - 97]);
	}

	cout << finalCost << endl;
	cout << value << endl;
}
