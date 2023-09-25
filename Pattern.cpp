/*
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 4; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << 10 << " ";
            // Alternatively : cout<<"10 ";
        }
        cout << endl;
    }
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 5; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
*/
/*
// Homework
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << col * col << " ";
        }
        cout << endl;
    }
}
*/
/*
// Homework
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << col * col * col << " ";
        }
        cout << endl;
    }
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    char name = 'a';
    // Alternatively: char name = 'a' + (row-1);
    // in that case no need of name++;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << name << " ";
        }
        cout << endl;
        name++;
    }
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    char name;
    // Alternatively: char name = 'a' + (row-1);
    // in that case no need of name++;
    for (row = 1; row <= 5; row++)
    {
        name = 'a';
        for (col = 1; col <= 5; col++)
        {
            cout << name << " ";
            name++;
        }
        cout << endl;
    }
}
*/
/*
// Alternatively
#include <iostream>
using namespace std;

int main()
{
    int row;
    char col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 'a'; col <= 'e'; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int row, col, count = 1;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
*/
/*
// Alternatively
#include <iostream>
using namespace std;

int main()
{
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << ((row - 1) * 5 + col) << " ";
        }
        cout << endl;
    }
}
*/