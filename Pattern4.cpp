/*
// First Pattern
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n;
    cout << "Enter the No. of Rows: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        // space print
        for (col = 1; col <= (n - row); col++)
            cout << "  ";
        // star print
        for (col = 1; col <= ((2 * row) - 1); col++)
            cout << "* ";

        cout << endl;
    }
}
*/
/*
// Second Pattern
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n;

    cout << "Enter the No. of Rows: ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // space print
        for (col = 1; col <= n - row; col++)
            cout << "  ";
        // number print increasing
        for (col = 1; col <= row; col++)
            cout << col << " ";
        // number print decreasing
        for (col = row - 1; col >= 1; col--)
            cout << col << " ";

        cout << endl;
    }
}
*/
/*
// Third Pattern
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n;

    cout << "Enter the No. of Rows: ";
    cin >> n;

    for (row = n; row >= 1; row--)
    {
        // space print
        for (col = 1; col <= n - row; col++)
            cout << "  ";
        // * print
        for (col = (2 * row) - 1; col >= 1; col--)
            cout << "* ";

        cout << endl;
    }
}
*/
/*
// Forth Pattern
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n;

    cout << "Enter the input: ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // * print
        for (col = 1; col <= n - (row - 1); col++)
            cout << "* ";
        // space print
        for (col = 1; col <= (row - 1) * 2; col++)
            cout << "  ";
        // * print
        for (col = 1; col <= n - (row - 1); col++)
            cout << "* ";
        cout << endl;
    }
    for (row = 1; row <= n; row++)
    {
        // * print
        for (col = 1; col <= row; col++)
            cout << "* ";
        // space print
        for (col = (2 * n) - (row * 2); col >= 1; col--)
            cout << "  ";
        // * print
        for (col = 1; col <= row; col++)
            cout << "* ";

        cout << endl;
    }
}
*/
// Fifth Pattern
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n;

    cout << "Enter the input: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        // * print
        for (col = 1; col <= row; col++)
            cout << "* ";
        // space print
        for (col = (2 * n) - (row * 2); col >= 1; col--)
            cout << "  ";
        // * print
        for (col = 1; col <= row; col++)
            cout << "* ";

        cout << endl;
    }
    for (row = 2; row <= n; row++)
    {
        // * print
        for (col = 1; col <= n - (row - 1); col++)
            cout << "* ";
        // space print
        for (col = 1; col <= (row - 1) * 2; col++)
            cout << "  ";
        // * print
        for (col = 1; col <= n - (row - 1); col++)
            cout << "* ";
        cout << endl;
    }
}