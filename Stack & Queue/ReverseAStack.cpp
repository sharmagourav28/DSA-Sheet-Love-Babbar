#include <bits/stdc++.h>
void insertatbottom(stack<int> &s, int x)
{

    if (s.empty())
    {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();
    insertatbottom(s, x);
    s.push(num);
}
void reverseStack(stack<int> &stack)
{
    // Write your code here
    // Write your code here
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();
    reverseStack(stack);
    insertatbottom(stack, num);
}