#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto lb = lower_bound(nums.begin(),nums.end(),target);
        auto up = upper_bound(nums.begin(),nums.end(),target);
        vector<int> result(2);
        if(lb == nums.end() || *lb != target){
            result = {-1,-1};
        }
        else{
            result[0] = distance(nums.begin(),lb);
            result[1] = distance(nums.begin(),prev(up));
        }
        return result;
    }
};

int main(){
    Solution solution;
    vector<int> nums =  {5,7,7,8,8,10};
    vector<int> result = solution.searchRange(nums, 9);

    for(int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    return 0;
}