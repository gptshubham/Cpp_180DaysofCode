/*
// Pattern 1
#include <iostream>
using namespace std;

int main()
{
    cout << "First Pattern" << endl;
    int row, col;
    int n;

    cout << "Enter the input: ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // space print
        for (col = 1; col <= n - row; col++)
            cout << " ";
        // *print
        for (col = 1; col <= row; col++)
            cout << "* ";

        cout << endl;
    }
}
*/
/*
// Pattern 2
#include <iostream>
using namespace std;

int main()
{
    cout << "Second Pattern" << endl;
    int row, col;
    int n;

    cout << "Enter the input: ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // space print
        for (col = 1; col <= n - row; col++)
            cout << " ";
        // number print
        for (col = 1; col <= (2 * row) - 1; col++)
            cout << col;

        cout << endl;
    }
}
*/
/*
// Pattern 3
#include <iostream>
using namespace std;

int main()
{
    cout << "Third Pattern" << endl;

    int row, col;
    char name;
    int n;

    cout << "Enter the input: ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // space print
        for (col = 1; col <= n - row; col++)
            cout << "  ";
        // letter print
        name = 'A';
        for (col = 1; col <= row; col++)
        {
            cout << name << " ";
            name++;
        }
        for (col = row - 1; col >= 1; col--)
        {
            name = 'A' + col - 1;
            cout << name << " ";
        }
        cout << endl;
    }
}
*/
// Pattern 4
#include <iostream>
using namespace std;

int main()
{
    cout << "Forth Pattern" << endl;
    int row, col;
    int n;

    cout << "Enter the input: ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // space print
        for (col = 1; col <= n - row; col++)
            cout << " ";
        // *print
        for (col = 1; col <= row; col++)
            cout << "* ";

        cout << endl;
    }
    for (row = 1; row <= n; row++)
    {
        // space print
        for (col = 1; col <= row - 1; col++)
            cout << " ";
        // * print
        for (col = 1; col <= n - (row - 1); col++)
            cout << "* ";

        cout << endl;
    }
}