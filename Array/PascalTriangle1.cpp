#include <iostream>
using namespace std;

int ncr(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int main()
{
    int row = 5;
    int col = 3;

    int ans = ncr(row - 1, col - 1);
    cout << " The value is " << ans << endl;
    return 0;
}
//                 1
//            1          1
//         1       2       1
//     1       3       3       1
// 1       4       6       4       1
