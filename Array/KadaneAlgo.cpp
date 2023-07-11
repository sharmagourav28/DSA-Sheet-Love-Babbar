#include <iostream>
using namespace std;

int kadaneAlgo(int arr[], int n)
{
    int sum = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maxi = max(maxi, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Kadane Algo : " << kadaneAlgo(arr, n);
}