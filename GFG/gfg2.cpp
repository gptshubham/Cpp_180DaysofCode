/*
For a given number N. Print the pattern in the following form:
1 121 12321 1234321 for N = 4.
*/
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int N;
    cin >> N;

    for (row = 1; row <= N; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << col;
        }
        for (col = row - 1; col >= 1; col--)
            cout << col;

        cout << " ";
    }
}