//{ Driver Code Starts
// Initial Template for C++

// C++ program to merge two max heaps.

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

void heapify(vector<int> &arr, int n, int i)
{
    int lar = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n and arr[lar] < arr[left])
    {
        lar = left;
    }
    if (right < n and arr[lar] < arr[right])
    {
        lar = right;
    }
    if (lar != i)
    {
        swap(arr[lar], arr[i]);
        heapify(arr, n, lar);
    }
}
class Solution
{
public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
    {
        // your code here

        vector<int> ans;
        for (auto i : a)
        {
            ans.push_back(i);
        }
        for (auto i : b)
        {
            ans.push_back(i);
        }

        int size = ans.size();
        // cout<<size<<endl;
        for (int i = (size / 2) - 1; i >= 0; i--)
        {
            heapify(ans, size, i);
        }

        // for(int i = 0;i<size;i++){
        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;
        return ans;
    }
};

//{ Driver Code Starts.

bool isMerged(vector<int> &arr1, vector<int> &arr2, vector<int> &merged)
{
    if (arr1.size() + arr2.size() != merged.size())
    {
        return false;
    }
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    sort(arr1.begin(), arr1.end());
    vector<int> mergedCopy = merged;
    sort(mergedCopy.begin(), mergedCopy.end());
    if (arr1 != mergedCopy)
    {
        return false;
    }
    for (int i = 1; i < merged.size(); i++)
    {
        if (merged[i] > merged[(i - 1) / 2])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i;
        cin >> n >> m;
        vector<int> a(n, 0), b(m, 0);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        vector<int> merged, copyA = a, copyB = b;
        Solution obj;
        merged = obj.mergeHeaps(a, b, n, m);
        bool flag = isMerged(copyA, copyB, merged);
        if (flag == false)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}

// } Driver Code Ends