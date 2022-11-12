#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1, mid;
        while(low <= high ){
            // cout << low << " " << mid << " " << high << endl;
            mid = low + (high - low) / 2;
            if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};

int main(){
    vector<int> in = {1, 3, 5, 6};
    int target = 5;

    Solution *solution = new Solution();
    cout << solution->searchInsert(in, target) << endl;

    return 0;
}
