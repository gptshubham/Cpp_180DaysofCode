#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
            cout << "*";
        cout << " ";
    }
}