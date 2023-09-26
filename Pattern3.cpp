/*
// First Pattern
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        // space print
        for (col = 1; col <= (n - row); col++)
            cout << " "
                 << " ";
        // star print
        for (col = 1; col <= row; col++)
        {
            cout << "*"
                 << " ";
        }
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

    for (row = 1; row <= 5; row++)
    {
        // print space
        for (col = 1; col <= (5 - row); col++)
            cout << " "
                 << " ";
        // print number
        for (col = 1; col <= row; col++)
            cout << row << " ";

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

    for (row = 1; row <= 5; row++)
    {
        // print space
        for (col = 1; col <= (5 - row); col++)
            cout << " "
                 << " ";
        // print number
        for (col = 1; col <= row; col++)
            cout << col << " ";

        cout << endl;
    }
}
*/
// Forth Pattern
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    char name;

    for (row = 1; row <= 5; row++)
    {
        name = 'A';
        // print space
        for (col = 1; col <= (5 - row); col++)
            cout << "  ";
        // print number
        for (col = 1; col <= row; col++)
        {
            cout << name << " ";
            name++;
        }
        cout << endl;
    }
}