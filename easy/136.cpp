#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++) mp[nums[i]]++;

        int ans;
        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]] == 1){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};

int main(){
    Solution *solution = new Solution();

    vector<int> vec = {2, 2, 1};

    cout << solution->singleNumber(vec) << endl;
}
