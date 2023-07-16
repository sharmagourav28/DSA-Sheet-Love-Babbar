#include <iostream>
#include <queue>

using namespace std;

int main()
{

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Size : " << q.size() << endl;
    // cout << " rea << endl;
    cout << "Front" << q.front() << endl;
    q.pop();
    q.pop();
    cout << "Size : " << q.size() << endl;
}