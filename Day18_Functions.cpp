/*
// Sum of Two Numbers
#include <iostream>
using namespace std;

// Sum function
int sum(int m, int n) // Function Declaration
{
    int ans = m + n; // Function Definition
    return ans;
}
// mul function
void mul(int m, int n)
{
    int ans = m * n;
    cout << ans << endl;
}
void fun()
{
    cout << "Hello Coder Army\n";
}

int main()
{
    int a, b;
    cout << "Enter input: ";
    cin >> a >> b;

    // Function Call
    cout << sum(a, b) << endl;
    mul(a, b);
    fun();
}
*/
/*
// Prime ?, Factorial ?, Difference == Prime ?
#include <iostream>
using namespace std;

// prime function
bool prime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// factorial function
int fact(int n = 3) // Default Parameter
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans *= i;

    return ans;
}

int main()
{
    int a, b;
    cout << "Enter number: ";
    cin >> a >> b;
    // a is prime or not
    cout << prime(a) << endl;
    // factorial of a
    cout << fact(a) << endl;
    // b is prime or not
    cout << prime(b) << endl;
    // factorial of b
    cout << fact(b) << endl;
    // is b-a a prime or not
    cout << prime(b - a) << endl;
    // factorial of b-a
    cout << fact(b - a);
}
*/
// Swap Function
#include <iostream>
using namespace std;

// Swap function
void Swap(int &m, int &n) // Pass by Reference
{
    int c;
    c = m;
    m = n;
    n = c;
}
void Swap(float &m, float &n) // function overloading
{
    int c;
    c = m;
    m = n;
    n = c;
}

int main()
{
    int a, b;
    cout << "Enter the input: ";
    cin >> a >> b;
    Swap(a, b);
    cout << a << " " << b;
    cout << endl;
    float f1 = 5.33, f2 = 4.77;
    Swap(f1, f2);
    cout << f1 << " " << f2 << endl;
    int k = 15, g = 13;
    swap(k, g); // inbuilt function
    cout << k << " " << g;
}