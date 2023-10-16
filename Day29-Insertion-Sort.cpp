
// Insertion sort basics
#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {7, 4, 2, 3, 5};
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

/*
// Sorting an array already sorted upto n-1
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 4, 6, 8, 5};

    for (int i = 4; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
            swap(arr[i], arr[i - 1]);
        else
            break;
    }
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}
*/