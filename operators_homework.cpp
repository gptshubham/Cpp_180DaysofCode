/*
// Temperature Range between 70 and 90
#include <iostream>
using namespace std;

int main()
{
    int tempreture;

    cout << "Enter the Tempreture in F: ";
    cin >> tempreture;

    if (tempreture > 70 and tempreture < 90)
        cout << "Yes";
    else
        cout << "No";
}
*/
/*
// Even and Positive Number
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter the Number: ";
    cin >> number;

    if (number > 0 and number % 2 == 0)
        cout << "Yes";
    else
        cout << "No";
}
*/
/*
// Age Check : teenager between 13 and 19 (inclusive)
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter Your Age: ";
    cin >> age;

    if (age >= 13 and age <= 19)
        cout << "You are a Teenager";
    else
        cout << "You are not a teenager";
}
*/
/*
// Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the Numbers: ";
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b or a > c)
        cout << "Yes";
    else
        cout << "No";
}
*/
// What will be the result below according to the precedence table
#include <iostream>
using namespace std;

int main()
{
    // 2*3-48==5/4*6
    int a = 2 * 3 - 48 == 5 / 4 * 6;
    cout << a;
    // 6<<2-4*8/2
    int b = 6 << 2 - 4 * 8 / 2;
    cout << b;
    // 5>4<3/2-8%4+5
    int c = 5 > 4 < 3 / 2 - 8 % 4 + 5;
    cout << c;
    // 14-8+92>>2+70
    int d = 14 - 8 + 92 >> 2 + 70;
    cout << d;
}