// Find first and last positions of an element in a sorted array
#include <iostream>
using namespace std;

void firstandlast(int arr[], int n, int x)
{
    int first = -1;
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        if (x != arr[i])
        {
            continue;
        }
        if (first == -1)
        {
            first = i;
        }
        last = i;
    }
    if (first != -1)
        cout << "First Occurrence = " << first
             << "\nLast Occurrence = " << last;
    else
        cout << "Not Found";
}
int main()
{
    int arr[] = {1, 3, 5, 5, 5, 567, 5, 5, 5, 123, 143};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    firstandlast(arr, n, x);
}