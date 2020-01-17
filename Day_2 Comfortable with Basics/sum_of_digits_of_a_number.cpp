#include <iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "ENter the number :  ";
    cin >> num;

    while (num != 0)
    {
        int remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    cout << "The sum is : " << sum << endl;
}