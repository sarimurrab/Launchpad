#include <iostream>
// Binary --------> Decimal
#include <math.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int two_pow_factor = 0;
    int sum = 0;
    while (num != 0)
    {
        int last_number = num % 10;
        sum = sum + (last_number * pow(2, two_pow_factor));
        num = num / 10;
        two_pow_factor = two_pow_factor + 1;
    }

    cout << "The Decimal Number is  :" << sum;
    return 0;
}