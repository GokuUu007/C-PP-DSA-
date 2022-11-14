#include <iostream>
#include <limits.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << secondLargest(arr, n);

    return 0;
}