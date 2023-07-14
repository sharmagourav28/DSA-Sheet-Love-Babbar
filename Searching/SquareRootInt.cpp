// A C++ program to find floor(sqrt(x)
#include <bits/stdc++.h>
using namespace std;

int sqrtint(int x)
{
    if (x == 0 || x == 1)
    {
        return x;
    }

    int i = 1, cnt = 1;
    while (cnt <= x)
    {
        i++;
        cout << i << endl;
        cnt = i * i;
    }
    return i - 1;
}
int main()
{
    int x = 4;
    cout << "Square Root of " << x << " is " << sqrtint(x) << endl;
    return 0;
}