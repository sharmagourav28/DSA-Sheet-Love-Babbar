#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
                ;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletee()
    {
        if (size == 0)
        {
            cout << "Nothing to do: " << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int leftindex = 2 * i;
            int rigthindex = 2 * i + 1;
            if (leftindex < size && arr[i] < arr[leftindex])
            {
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if (rigthindex < size && arr[i] < arr[rigthindex])
            {
                swap(arr[i], arr[rigthindex]);
                i = rigthindex;
            }
            else
            {
                return;
            }
        }
    }
};
void heapify(int arr[], int n, int i)
{
    int lar = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[lar] < arr[left])
    {
        lar = left;
    }
    if (right <= n && arr[lar] < arr[right])
    {
        lar = right;
    }

    if (lar != i)
    {
        swap(arr[lar], arr[i]);
        heapify(arr, n, lar);
    }
}

void heapsort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(arr[size], arr[1]);
        size--;
        heapify(arr, size, 1);
    }
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    cout << "Insertion into heap:" << endl;
    h.print();
    h.deletee();
    cout << "Deletion into heap : " << endl;
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    cout << "HeapifyAlgo called :" << endl;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    // cout << "Print : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Heap Sort Algo :" << endl;
    heapsort(arr, n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
