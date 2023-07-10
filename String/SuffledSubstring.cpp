#include <bits/stdc++.h>
using namespace std;

bool sufflesubstring(string a, string b)
{

    int n = a.length();
    int m = b.length();

    if (n > m)
    {
        return false;
    }
    else
    {
        sort(a.begin(), a.end());
        for (int i = 0; i < m; i++)
        {
            if (i + n - 1 >= m)
            {
                return false;
            }

            string str = "";
            for (int j = 0; j < n; j++)
            {
                str.push_back(b[i + j]);
            }
            // sort(b.begin(), b.end());
            sort(str.begin(), str.end());
            if (str == a)
            {
                return true;
            }
        }
    }
}
int main()
{

    string str1 = "onetwofour";
    sort(str1.begin(), str1.end());
    // cout << str1 << endl;
    string str2 = "hellofourtwooneworld";

    bool a = sufflesubstring(str1, str2);
    if (a)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}