#include <bits/stdc++.h>

void insertatsort(stack<int> &stack, int x)
{
    if (stack.empty() || stack.top() < x)
    {
        stack.push(x);
        return;
    }
    int ele = stack.top();
    stack.pop();
    insertatsort(stack, x);
    stack.push(ele);
}
void sortStack(stack<int> &stack)
{
    // Write your code here
    if (stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();
    sortStack(stack);

    insertatsort(stack, num);
}