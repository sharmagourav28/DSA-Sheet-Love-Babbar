#include <bits/stdc++.h>
using namespace std;

void maxminele(int arr[], int n)
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
    cout << "Min ele " << min << endl;
    cout << "Max ele " << max << endl;
}
int main()
{
    int arr[] = {2, 14, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxminele(arr, n);
    return 0;
}