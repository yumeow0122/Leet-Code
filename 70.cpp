#include <bits/stdc++.h>

using namespace std;

class Solution {
    int dp[46];
public:
    int climbStairs(int n) {
        dp[0] = 0, dp[1] = 1, dp[2] = 2;

        if(n <= 2) return dp[n];

        for(int i=3; i<=n; i++)
            dp[i] = dp[i-1] + dp[i-2];
        return dp[n];
    }
};

int main(){
    int t1 = 2, t2 = 3;

    Solution *solution = new Solution();

    for(int i=1; i<=8; i++)
        cout << "Case:" << i << "\n" << solution->climbStairs(i) << endl;

    return 0;
}
