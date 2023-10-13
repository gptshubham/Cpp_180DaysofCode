// Bubble Sort

#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {7, 4, 8, 5, 3};
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the Elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // sorting array
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}