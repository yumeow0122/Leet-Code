#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minTime(int n, vector<vector<int>> &edges, vector<bool> &hasApple)
    {
        vector<vector<int>> al(n);
        for (int i = 0; i < edges.size(); i++)
        {
            al[edges[i][0]].push_back(edges[i][1]);
            al[edges[i][1]].push_back(edges[i][0]);
        }
        return _dfs(-1, 0, al, hasApple);
    }

private:
    int _dfs(int prev, int curr, vector<vector<int>> al, vector<bool> hasApple)
    {
        int ans = 0;
        for (int i = 0; i < al[curr].size(); i++)
        {
            int idx = al[curr][i];
            if (idx != prev)
            {
                int result = _dfs(curr, idx, al, hasApple);
                if (result > 0 || hasApple[idx])
                {
                    ans += result + 2;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution solution;

    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 4}, {1, 5}, {2, 3}, {2, 6}};
    vector<bool> hasApple = {false, false, true, false, true, true, false};

    cout << solution.minTime(7, edges, hasApple) << endl;

    return 0;
}