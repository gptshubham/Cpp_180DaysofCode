#include <iostream>
using namespace std;
int main()
{
    // package example
    // int package;

    // marks example
    int marks;
    cout << "Enter Your Marks : ";
    cin >> marks;
    if (marks > 33)
        cout << "Pass!"; // if there is only single line of code after if then no need of {}
    else
        cout << "Fail!"; // if there is only single line of code after else then no need of {}
}
