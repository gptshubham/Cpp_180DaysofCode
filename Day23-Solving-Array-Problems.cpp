/*
// Reverse an array
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int i = 0, j = 5;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (i = 0; i < 6; i++)
        cout << arr[i] << " ";
}
*/
/*
// Second Max
#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {2, 6, 4, 3, 8, 7, 1};

    int max = 0;
    int ans = -1;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            ans = max;
            max = arr[i];
        }
    }
    cout << max << " " << ans;
}
// this is what I did initially but this code fails when second largest number appears after the largest one in an array.
*/
/*
// Fibonacci Series
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the nth term: ";
    cin >> n;

    int arr[1000] = {0, 1};
    for (int i = 2; i <= n - 1; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    cout << arr[n - 1];
}
*/
/*
// Rotate array by 1;
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 7, 4, 11, 5, 8};
    int temp = arr[5];

    for (int i = 5; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = temp;

    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
}
*/
#include <iostream>
using namespace std;

void fun(int a[], int n)
{
    cout << sizeof(a) << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int arr[6] = {2, 4, 1, 9, 5, 7};
    cout << sizeof(arr) << endl;
    fun(arr, 6);
}