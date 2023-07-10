// C++ program to check string is palindrome or not
#include <iostream>
using namespace std;

string isplaindrome(string s)
{
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return "String is not palindrome";
        }
    }
    return "String is palindrome";
}

int main()
{
    string s = "ABCDCBA";
    cout << isplaindrome(s);
    return 0;
}