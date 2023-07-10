// C++ program to reverse a string using stack
#include <bits/stdc++.h>
using namespace std;

void recursiveReverse(string &str)
{
    stack<char> st;
    int n = str.length();
    for (int i = 0; i < n; i++)
        st.push(str[i]);

    for (int i = 0; i < n; i++)
    {
        str[i] = st.top();
        st.pop();
    }
}

int main()
{
    string str = "Hello world";
    recursiveReverse(str);
    cout << str;
    return 0;
}
