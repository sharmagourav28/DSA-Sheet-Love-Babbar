#include <iostream>
using namespace std;

void insertAtpos(int arr[], int n, int x, int pos)
{
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = x;
}

int main()
{
    int arr[13] = {2, 4, 1, 5, 87, 3, 77, 78, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele = 28;
    int pos = 4;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertAtpos(arr, n, ele, pos);
    n++;
    cout << "Insert At Any postion : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}