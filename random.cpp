// Selection sort - Integers (Ascending Order)
/*
// This is what I have done;
#include <iostream>
using namespace std;

int main()
{
    // int arr[6] = {10, 8, 2, 1, 3, 4};   // if array is given;
    // if user has to provide array;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[1000];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // printing array to confirm.
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // sorting array
    for (int i = 0; i < n; i++)
    {
        int index = 0;
        int temp = arr[i];
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[j];
                index = j;
            }
        }
        arr[index] = temp;
        cout << arr[i] << " ";
    }
}
*/
/*
// this is what Rohit bhai has taught in the lecture
#include <iostream>
using namespace std;

int main()
{
    // int arr[6] = {10, 8, 2, 1, 3, 4};   // if array is given;
    // if user has to provide array;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[1000];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // printing array to confirm.
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // sorting array
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
*/
// Homework - Day25-Selection Sort
/*
// Selection sort - Integers (Dexcending Order)
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[1000];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // printing array to confirm.
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // sorting array - Descending Order
    for (int i = 0; i < n; i++)
    {
        int index = 0;
        int temp = arr[i];
        for (int j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                arr[i] = arr[j];
                index = j;
            }
        }
        arr[index] = temp;
        cout << arr[i] << " ";
    }
}
*/
/*
// Selection sort - Characters (Ascending Order)
#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'v', 't', 's', 'g', 'k'};
    for (int i = 0; i < 5; i++)
    {
        int index = 0;
        int temp = arr[i];
        for (int j = i; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[j];
                index = j;
            }
        }
        arr[index] = temp;
        cout << arr[i] << " ";
    }
}
*/
// Week 4: Weekend Revision
/*
#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {2, 8, 1, 0, 6};
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[1000];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << arr + 0 * 4 << endl;
    int *arrayAddress = &arr[0];
    cout << arrayAddress;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
            max = arr[i];
    }
    cout << max;
}
*/
/*
// Given an integer array and another integer element. The task is to find if the given element is present in array or not. (GeeksforGeeks)
#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the Element to search for: ";
    cin >> x;

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // searching for x
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            index = i;
    }
    cout << index;
}
*/
/*
// Reverse Array
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 8, 1, 0, 6};
    int i = 0, j = 4;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}
*/
/*
// missing number (GeeksforGeeks)
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 4, 5, 6};

    int sum1 = 0, sum2 = 0, ans;

    for (int i = 0; i < 5; i++)
        sum2 += arr[i];

    for (int i = 1; i <= 6; i++)
        sum1 += i;

    ans = sum1 - sum2;

    cout << ans;
}
*/