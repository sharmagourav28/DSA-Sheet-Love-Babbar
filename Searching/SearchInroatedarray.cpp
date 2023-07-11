// Search an element in a sorted and rotated Array
#include <iostream>
using namespace std;

int searchinRotatedArray(int arr[], int n, int ele)
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
        if (arr[start] <= arr[mid])
        {
            if (arr[start] <= ele && ele <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= ele && ele <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{

    int arr[] = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele = 1;
    int ans = searchinRotatedArray(arr, n, ele);
    cout << "Element found at index : " << ans << endl;
}