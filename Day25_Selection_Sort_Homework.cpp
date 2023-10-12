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
