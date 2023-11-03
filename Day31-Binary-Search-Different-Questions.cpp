// Classwork Questions
// LeetCode Q34
// Leetcode Q35
// Leetcdoe Q69

// Homework Questions
// Q1. No. of occurences of x in array
#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    // n
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    // arr
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // target
    int target;
    cout << "Enter the element to count the occurences: ";
    cin >> target;

    int start = 0, end = n - 1, first = -1, last = -1, mid;
    // find first
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    // find last
    start = 0, end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << "No. of occurences of " << target << " = " << last - first + 1;
}