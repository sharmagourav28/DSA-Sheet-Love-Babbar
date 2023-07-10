// c++ program to reverse an array
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {2, 4, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    reverse(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}