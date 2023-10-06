/*
// Convert a int A
#include <iostream>
using namespace std;

char upper(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}

int main()
{
    char name;
    cout << "Enter input: ";
    cin >> name;

    cout << upper(name);
}
*/
/*
#include <iostream>
using namespace std;

// digit count function
int digit(int num)
{
    int i = 0;
    while (num)
    {
        num /= 10;
        i++;
    }
    return i;
}

// sum function
bool Armstrong(int num, int digitcount)
{
    // int power = digit(num);
    int n = num, total = 0, term;
    while (n)
    {
        term = n % 10;
        int powerofterm = 1;
        for (int i = 1; i <= digitcount; i++)
        {
            powerofterm *= term;
        }
        //tried to use pow() even included math.h still don't know why it didn't work.
        total += powerofterm;
        powerofterm = 1;
        n /= 10;
    }
    // checking if armstrong
    if (total == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    // count digit
    int digitcount = digit(num);
    // Armstrong Number
    cout << Armstrong(num, digitcount) << endl;
}
*/
// Find Trailing Zero in Factorial
/* This is what I did initially this code fails as the size of input increases. Doesn't work after 12;
#include <iostream>
using namespace std;

// factorial function
int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

// trailing zeroCount function
void zeroCount(int factorial)
{
    int count = 0;
    while (factorial)
    {
        int rem = factorial % 10;
        if (rem != 0)
            break;
        else
            count++;

        factorial /= 10;
    }
    cout << count;
}

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int fact = factorial(n);
    zeroCount(fact);
}
*/
// This is what Rohit has taught
#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter a Number: ";
    cin >> n;

    while (n >= 5)
    {
        count += n / 5;
        n /= 5;
    }
    cout << count;
}
