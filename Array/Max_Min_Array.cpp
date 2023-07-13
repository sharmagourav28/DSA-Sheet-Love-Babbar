#include <bits/stdc++.h>
using namespace std;

void MaxMInelement(int arr[], int n)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
        // else if (arr[i] < min && arr[i] != max)
        // {
        //     min = arr[i];
        // }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max && arr[i] != min)
        {
            max = arr[i];
        }
    }
    cout << "Max element of an array is " << max << endl;
    cout << "Min element of an array is " << min << endl;
}

int main()
{
    int arr[] = {3, 5, 4, 7, 9, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    MaxMInelement(arr, n);
}