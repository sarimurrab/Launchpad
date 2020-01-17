#include <iostream>
// Binary --------> Decimal
#include <math.h>
using namespace std;
int main()
{
    int n, num;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        int two_pow_factor = 0;
        int sum = 0;
        while (num != 0)
        {
            int last_number = num % 10;
            sum = sum + (last_number * pow(2, two_pow_factor));
            num = num / 10;
            two_pow_factor = two_pow_factor + 1;
        }
        cout << sum;
    }

    return 0;
}