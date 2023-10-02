/*
// Table
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter the Number: ";
    cin >> n;
    i = 1;
    while (i <= 10)
    {
        cout << i * n;
        i++;
        cout << endl;
    }
}
*/
/*
// Factors
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter the Number: ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << i << ",";
        }
        i++;
    }
}
*/
/*
// Do While
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    do
    {
        i++;
        cout << i;
        // i++;
    } while (i <= 5);
}
*/
/*
// sum of n natural numbers
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    int sum = 0;

    cout << "Enter the Number: ";
    cin >> n;

    i = 1;
    do
    {
        // i++;
        sum += i;
        i++;
    } while (i <= n);
    cout << "sum = " << sum << endl;
}
*/
/*
// break
#include <iostream>
using namespace std;

int main()
{
    int i;
    i = 1;
    while (i <= 10)
    {
        if (i == 4)
            break;
        cout << i << " ";
        i++;
    }
}
*/
/*
// continue
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= 100; i++)
    {
        if (i % n == 0)
            continue;

        cout << i << " ";
    }
}
*/
/*
// switch
#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter the Number: ";
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "Well Done!";
        break;

    case 2:
        cout << "Do Better Next Time!";
        break;

    case 3:
        cout << "Work Hard!";
        break;

    default:
        cout << "Tu Rahne De!";
        break;
    }
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter the Number: ";
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Invalid Input";
        break;
    }
}
*/
// Scope of Variable
#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    cout << i;
    int i = 30;
    cout << i;
}