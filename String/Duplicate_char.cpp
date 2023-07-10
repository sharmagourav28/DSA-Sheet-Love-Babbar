#include <iostream>
#include <map>
using namespace std;
void dup(string str)
{
    map<char, int> cnt;
    int m = str.length();
    for (int i = 0; i < m; i++)
    {
        cnt[str[i]]++;
        }
    for (auto it : cnt)
    {
        if (it.second > 1)
        {
            cout << it.first << " count = " << it.second << endl;
        }
    }
}
int main()
{
    string str = "Hello World";
    dup(str);
    return 0;
}