vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
{
    // code here
    vector<int> ans;
    int sr = 0;
    int sc = 0;
    int er = r - 1;
    int ec = c - 1;
    int cnt = 0;
    int total = r * c;
    while (cnt < total)
    {
        for (int i = sc; cnt < total && i <= ec; i++)
        {
            ans.push_back(matrix[sr][i]);
            cnt++;
        }
        sr++;
        for (int i = sr; cnt < total && i <= er; i++)
        {
            ans.push_back(matrix[i][ec]);
            cnt++;
        }
        ec--;
        for (int i = ec; cnt < total && i >= sc; i--)
        {
            ans.push_back(matrix[er][i]);
            cnt++;
        }
        er--;
        for (int i = er; cnt < total && i >= sr; i--)
        {
            ans.push_back(matrix[i][sc]);
            cnt++;
        }
        sc++;
    }
    return ans;
}