#include <iostream>
using namespace std;
int main()
{
    /*
    // Q1. printing from 101 to 200
    for (int i = 100; i <= 200; i++)
        cout << i << endl;
    */
    /*
     // Q2. printing form 'a' to 'z'
     char name;
     for (name = 'a'; name <= 'z'; name++)
         cout << name << ',';
     */
    /*
    // Q3. printing from 10 to 1
    int i;
    for (i = 10; i >= 1; i--)
        cout << i << ' ';
    */
    /*
     // Q4. printing from 1 to 100 (both included) with stepsize = 3.
     int i;
     for (i = 1; i <= 100; i += 3)
         cout << i << ' ';
     */
    /*
    // Q.5 print table of a given number
    int n, i;
    cout << "Enter a Number: ";
    cin >> n;
    for (i = 1; i <= 10; i++)
        cout << n << " * " << i << " = " << n * i << endl;
    */
    /*
     // Q.6 printing power of a number
     int number, power, i, result;
     cout << "Enter the Number: ";
     cin >> number;
     cout << "Enter the Power: ";
     cin >> power;
     result = 1;
     for (i = 1; i <= power; i++)
     {
         result *= number;
     }
     cout << number << " power " << power << " = " << result;
     */
    /*
    // Alternatively
    int n, power, number, i;
    cin >> n >> power;
    number = n;
    for (i = 1; i < power; i++)
    {
        number *= n;
    }
    cout << number;
    */
    /*
     // Q7. Sum of n natural numbers
     int number, i, sum;
     cout << "Enter the Number: ";
     cin >> number;
     sum = 0;
     for (i = 1; i <= number; i++)
     {
         sum += i;
     }
     cout << "Sum of " << number << " natural numbers is " << sum;
     */
    /*
    // Homework : Sum of squares of n natural numbers
    int n, i, sum;
    cout << "Enter n: ";
    cin >> n;
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += (i * i);
    }
    cout << "Sum of squares of " << n << " natural numbers is " << sum;
    */
}