#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isPalindrome(string S)
    {
        // Your code goes here
        string str = "";
        for (int i = S.size() - 1; i >= 0; i--)
        {
            str += S[i];
        }
        if (str == S)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;

        cout << ob.isPalindrome(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends