/*
// Homework1
#include <iostream>
using namespace std;

int main()
{
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        // space print
        for (col = 1; col <= 5 - row; col++)
            cout << "  ";
        // number print
        for (col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
*/
// Homework 2
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    char name;

    name = 'A';
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= (5 - row); col++)
            cout << "  ";
        for (col = 1; col <= row; col++)
        {
            cout << name << " ";
        }
        cout << endl;
        name++;
    }
}