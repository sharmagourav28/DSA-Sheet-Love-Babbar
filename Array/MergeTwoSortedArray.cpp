#include <bits/stdc++.h>
using namespace std;
// Merge two sorted array using third array
void mergesortarray(int arr1[], int arr2[], int m, int n, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
    sort(arr3, arr3 + n + m);
}

int main()
{
    int arr1[] = {1, 3, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n + m];
    mergesortarray(arr1, arr2, m, n, arr3);
    for (int i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}