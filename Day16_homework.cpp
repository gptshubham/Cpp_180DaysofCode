// Write a program to convert decimal numbers to Octal numbers.
/*
// Decimal to Octal
#include <iostream>
using namespace std;

int main()
{
    int rem, ans = 0, mul = 1;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    while (num)
    {
        // remainder
        rem = num % 8;
        // quotient
        num /= 8;
        // ans
        ans += rem * mul;
        // mul
        mul *= 10;
    }
    cout << "Octal Form: " << ans;
}
*/
// Write a program to convert Octal numbers to decimal numbers.
/*
// Octal to Decimal
#include <iostream>
using namespace std;

int main()
{
    int rem, ans = 0, mul = 1;
    int num;
    cout << "Enter a octal number: ";
    cin >> num;

    while (num)
    {
        // remainder
        rem = num % 10;
        // quotient
        num /= 10;
        // ans
        ans += rem * mul;
        // mul
        mul *= 8;
    }
    cout << "Decimal Form: " << ans;
}
*/
// Write a program to convert binary to Octal numbers
/*
// Binary to Octal
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

    // Binary to Decimal
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
    cout << "Decimal Form: " << ans << endl;
    num = ans;
    ans = 0;
    mul = 1;
    // Decimal to Octal
    while (num)
    {
        // remainder
        rem = num % 8;
        // quotient
        num /= 8;
        // ans
        ans += rem * mul;
        // mul
        mul *= 10;
    }
    cout << "Octal Form: " << ans;
}
*/
// Write a program to convert Octal numbers to binary numbers
// Octal to Binary
#include <iostream>
using namespace std;

int main()
{
    int rem, ans = 0, mul = 1;
    int num;
    cout << "Enter an octal number: ";
    cin >> num;

    // octal to decimal
    while (num)
    {
        // remainder
        rem = num % 10;
        // quotient
        num /= 10;
        // ans
        ans += rem * mul;
        // mul
        mul *= 8;
    }
    cout << "Decimal Form: " << ans << endl;
    num = ans;
    ans = 0;
    mul = 1;
    // decimal to binary
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