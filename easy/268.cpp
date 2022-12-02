#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actual = 0;
        for (int i = 0; i < nums.size(); i++) {
            actual += nums[i];
        }

        int expect = nums.size() * (nums.size() + 1)  / 2;
        return expect - actual;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {3, 0, 1};

    cout << solution.missingNumber(nums) << endl;
    return 0;
}