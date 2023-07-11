#include <iostream>
using namespace std;

int fiexedlinear(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Fixed point at " << fiexedlinear(arr, n) << endl;
    return 0;
}