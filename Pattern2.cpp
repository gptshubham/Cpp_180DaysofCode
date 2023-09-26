/*
// First
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
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
// Second
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
*/
/*
// Third
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
}
*/
/*
// Forth
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
*/
/*
// Fifth
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    char name = 'a';
    for (row = 1; row <= 5; row++)
    {
        // Alternatively: char name='a'+(row-1)
        // in that case no need of name++
        for (col = 1; col <= row; col++)
        {
            cout << name << " ";
        }
        cout << endl;
        name++;
    }
}
*/
/*
// Sixth
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 5; row >= 1; row--)
    {
        for (col = row; col >= 1; col--)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}
*/
/*
// Alternative Approach
#include <iostream>
using namespace std;

int main()
{
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - (row - 1); col++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}
*/
/*
// Seventh
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 5; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
*/
// Eighth
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 5; col > (5 - row); col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}