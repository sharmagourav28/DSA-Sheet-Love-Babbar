#include <bits/stdc++.h>
using namespace std;

void MaxMInelement(int arr[], int n)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min && arr[i] != max)
        {
            min = arr[i];
        }
    }
    cout << "Max element of an array is " << max << endl;
    cout << "Min element of an array is " << min << endl;
}

int main()
{
    int arr[] = {3, 5, 4, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    MaxMInelement(arr, n);
}