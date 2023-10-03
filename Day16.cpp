/*
// Decimal to Binary
#include <iostream>
using namespace std;

int main()
{
    int rem, num, mul, ans;

    cout << "Enter a Number: ";
    cin >> num;
    mul = 1;
    ans = 0;

    while (num > 0)
    {
        // remainder
        rem = num % 2;
        // ans
        ans += rem * mul;
        // quotient
        num /= 2;
        // mul
        mul *= 10;
    }
    cout << "Binary Form: " << ans;
}
*/
// Binary to Decimal
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a binary number: ";
    cin >> num;

    int rem, ans, mul;
    ans = 0;
    mul = 1;

    while (num)
    {
        // Reminder
        rem = num % 10;
        // ans
        ans += rem * mul;
        // quotient
        num /= 10;
        // mul
        mul *= 2;
    }
    cout << "Decimal Form: " << ans;
}