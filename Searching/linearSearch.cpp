#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if (ele == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 1, 5, 7, 9, 88, 55, 44, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele = 88;
    int ans = linearsearch(arr, n, ele);
    cout << "Element present at index : " << ans << endl;
}