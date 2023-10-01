#include <iostream>
using namespace std;

int main()
{
    int row, col, sub;
    int N;

    cout << "Ener the number: ";
    cin >> N;

    for (row = N; row >= 1; row--)
    {
        for (col = N; col >= 1; col--)
        {
            for (sub = row; sub >= 1; sub--)
            {
                cout << col << " ";
            }
        }
        cout << "$";
    }
}