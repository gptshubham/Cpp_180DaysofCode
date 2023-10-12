// Selection sort - Integers (Ascending Order)
/*
// This is what I have done;
#include <iostream>
using namespace std;

int main()
{
    // int arr[6] = {10, 8, 2, 1, 3, 4};   // if array is given; replace n by 6 everywhere.
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
// this is what Rohit bhai has taught in the lecture
#include <iostream>
using namespace std;

int main()
{
    // int arr[6] = {10, 8, 2, 1, 3, 4};   // if array is given; replace n;
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