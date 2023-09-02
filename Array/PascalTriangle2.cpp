#include <iostream>
using namespace std;

int main()
{
    cout << "Print the pascal trinagle row : " << endl;
    int row = 5;
    int ans = 1;
    cout << ans << " ";

    for (int i = 1; i < row; i++)
    {
        ans = ans * (row - i);
        ans = ans / i;
        cout << ans << " ";
    }
    return 0;
}