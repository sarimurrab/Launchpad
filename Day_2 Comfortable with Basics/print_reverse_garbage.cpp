#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long int n = 12547891;
    long int power_factor_of_10 = 0;
    long int sum = 0;
    while (n != 0)
    {
        long int last_number = n % 10;
        long int pow1 = pow(10, power_factor_of_10);
        cout << "10's power value = " << pow1 << endl;

        long int abc = (last_number * pow1);
        cout << "Last_num * 10's pow = " << abc << endl;

        sum = sum + abc;
        cout << "Sum till now = " << sum << endl;
        n = n / 10;
        power_factor_of_10 = power_factor_of_10 + 1;
        cout << endl;
    }
    //cout << "The number is : " << sum;
    return 0;
}