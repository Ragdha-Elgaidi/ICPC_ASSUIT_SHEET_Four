#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string url;
    cin >> url;
    
    for (int i = 0; i < url.size(); i++)
    {
        if (url[i] == '?')
        {
            i++;
            for (int j = i; j < url.size(); j++)
            {
                if (url[j] == '=')
                {
                    cout << ": ";
                    continue;
                }
                if (url[j] == '&')
                {
                    cout << endl;
                    continue;

                }
                cout << url[j];
               
            }
        }
    }
}
