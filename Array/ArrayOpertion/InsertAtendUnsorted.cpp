#include <iostream>
using namespace std;

int insertAtend(int arr[], int n, int capcity, int ele)
{
    if (n >= capcity)
    {
        return n;
    }

    arr[n] = ele;
    return (n + 1);
}

int main()
{
    int arr[20] = {2, 4, 1, 5, 7, 8, 9, 2};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 8;
    int ele = 22;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    n = insertAtend(arr, n, capacity, ele);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}