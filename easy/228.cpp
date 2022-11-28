#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size() == 0) return ans;
        
        int head = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(i == nums.size()-1 || nums[i]+1 != nums[i+1]){
                if(nums[i] != head)
                    ans.push_back( to_string(head) + "->" + to_string(nums[i]) );
                else
                    ans.push_back(to_string(head));

                if(i+1 != nums.size())
                    head = nums[i+1];
            }
        }

        return ans;
    }
};

int main(){
    vector<int> nums = {0,1,2,4,5,7};
    Solution solution;

    vector<string> ans = solution.summaryRanges(nums);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }

}
