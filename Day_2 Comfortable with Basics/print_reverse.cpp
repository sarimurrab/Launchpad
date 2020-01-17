#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int last_number = n % 10;
    int new_number = n / 10;

    while (new_number != 0)
    {
        int a = last_number * 10;
        last_number = new_number % 10;
        sum = a + last_number;
        new_number = new_number / 10;
        last_number = sum;
    }
    cout << sum;

    return 0;
}