#include <bits/stdc++.h>
using namespace std;
// Function to find median  of row wise sorted matrix
int Findmedian(int arr[3][3], int row, int col)
{
    int median[row * col];
    int index = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            median[index] = arr[i][j];
            index++;
        }
    }

    return median[(row * col) / 2];
}
int main()
{
    int row = 3, col = 3;
    int arr[3][3] = {{1, 3, 5},
                     {2, 6, 9},
                     {3, 6, 9}};
    cout << "The median of the row-wise sorted matrix is: " << Findmedian(arr, row, col) << endl;
    return 0;
}