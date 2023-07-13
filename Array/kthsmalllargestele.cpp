#include <bits/stdc++.h>
using namespace std;

int klar(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[n - k];
}

int ksmall(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}
int kthSmallest(int arr[], int l, int r, int k)
{
    // code here
    // better optimal code
    priority_queue<int> pq;
    for (int i = l; i <= r; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    return pq.top();
}
int main()
{
    int arr[] = {8, 2, 1, 7, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n << endl;
    int k = 3;
    int lar = klar(arr, n, k);
    cout << k << " largest ele is " << lar << endl;
    int small = ksmall(arr, n, k);
    cout << k << " smallest element is " << small << endl;

    int key = kthSmallest(arr, 0, n - 1, k);
    cout << k << " Smallest element is : " << key << endl;
}