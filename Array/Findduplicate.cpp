#include <bits/stdc++.h>
using namespace std;

int duplicate(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = duplicate(arr, n);
    cout << "Duplicate value in array is " << ans << endl;
}