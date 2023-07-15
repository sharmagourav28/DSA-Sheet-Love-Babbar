#include <bits/stdc++.h>

void insertAtbottom(stack<int> &s, int x)
{

    if (s.empty())
    {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();
    insertAtbottom(s, x);
    s.push(num);
}
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    // Write your code here.
    insertAtbottom(myStack, x);
    return myStack;
}
