#include <iostream>
#include <stack>
using namespace std;

class stack1
{
public:
    int *arr;
    int top;
    int size;

    stack1(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    stack1 st(5);
    st.push(20);
    st.push(10);
    st.push(11);
    st.push(2);
    // st.push(1);
    // st.push(22);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    if (st.isempty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
}