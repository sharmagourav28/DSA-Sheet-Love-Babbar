#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int ele)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = end + (start - end) / 2;
        if (ele == arr[mid])
        {
            return mid;
        }
        else if (ele < arr[mid])
        {
            end = mid - 1;
        }
        else if (ele > arr[mid])
        {

            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 22, 33, 44, 55, 66, 77, 88, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele = 88;
    int ans = binarysearch(arr, n, ele);
    cout << "Element present at index " << ans << endl;
}