#include <iostream>
using namespace std;

void binanrySearch1(int arr[], int start, int end, int ele)
{

    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == ele)
        {
            cout << "Element found at index : " << mid << endl;
        }
        if (arr[mid] > ele)
        {
            end = mid - 1;
        }
        if (arr[mid] < ele)
        {
            start = mid + 1;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele = 5;
    binanrySearch1(arr, 0, n - 1, ele);
}