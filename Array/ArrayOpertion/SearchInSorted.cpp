#include <iostream>
using namespace std;

int binanrySearch1(int arr[], int start, int end, int ele)
{

    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        else if (arr[mid] > ele)
        {
            end = mid - 1;
        }
        else if (arr[mid] < ele)
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele = 5;
    int k = binanrySearch1(arr, 0, n - 1, ele);

    if (k != -1)
    {
        cout << "Element found : " << endl;
    }
    else
    {
        cout << "Element not found : " << endl;
    }
}