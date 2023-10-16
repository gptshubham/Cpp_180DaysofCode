/*
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0};

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[8];

    return 0;
}
*/
/*
//sizeof() and No. of elements in array
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int a;
    cout << sizeof(a) << " ";
    cout << sizeof(arr) << " ";
    cout << sizeof(arr) / sizeof(arr[0]) << " ";

    return 0;
}
*/
/*
// finding minimum value of array;
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {12, 11, 24, 6, 8, 15};
    int min = INT16_MAX;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << min;
    return 0;
}
*/
// finding max value of array;
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {12, 11, 24, 6, 8, 15};
    int max = INT16_MIN;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max;

    return 0;
}