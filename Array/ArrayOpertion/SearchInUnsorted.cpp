#include <iostream>
using namespace std;
void linearSearch(int arr[], int n, int ele)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            cout << "Element found at index :" << i << endl;
            cnt++;
        }
    }
    if (cnt == 0)
    {
        cout << "Element not found : " << endl;
    }
}

void insertAtend()
{
}
int main()
{
    // linear Search
    int arr[] = {11, 2, 1, 4, 666, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ele = 4;
    linearSearch(arr, n, ele);
}