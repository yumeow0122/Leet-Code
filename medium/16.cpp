#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3)
            return accumulate(nums.begin(), nums.end(), 0);

        sort(nums.begin(), nums.end());

        int result = nums[0] + nums[1] + nums[2];
        for(int i=0; i<nums.size()-2; i++) {
            int left = i+1, right = nums.size()-1;
            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if(abs(target - sum) < abs(target - result)) result = sum;
                if(sum == target) return result;

                (sum > target)? right-- : left++;
            }

        }
        return result;
    }
};

int main(){
    Solution solution;

    vector<int> nums = {-1, 2, 1, -4};

    cout << solution.threeSumClosest(nums, 1) << endl;
    return 0;
}