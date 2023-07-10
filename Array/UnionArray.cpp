#include <iostream>
#include <set>
using namespace std;

void unionat(int a[], int n, int b[], int m)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(b[i]);
    }

    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);

    int b[] = {7, 8, 9, 10, 11, 12};
    int m = sizeof(b) / sizeof(b[0]);
    unionat(a, n, b, m);
}