#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout << "1";
            }
            else
            {
                if (j == 1 || j == i) // print first and last column as "1"
                {
                    cout << "1";
                }
                else // print rest as "0"
                {
                    cout << "0";
                }
            }
        }
        cout << endl;
    }
    return 0;
}