#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int size, arr[26] = { 0 };
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        char c;
        cin >> c;
        arr[(int)c - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (arr[i] != 0)
        {
            cout << (char)(i + 97);
            arr[i]--;
        }
    }
}
