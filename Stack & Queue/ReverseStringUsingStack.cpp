//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
char *reverse(char *str, int len);
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        char str[10000];
        cin >> str;
        long long int len = strlen(str);
        char *ch = reverse(str, len);
        for (int i = 0; i < len; i++)
        {
            cout << ch[i];
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

#include <stack>
// return the address of the string
char *reverse(char *s, int n)
{
    // code here
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        st.push(s[i]);
    }

    for (int i = 0; i < n; i++)
    {
        s[i] = st.top();
        st.pop();
    }
    return s;
}