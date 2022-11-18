#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(auto it=nums.begin(); it<nums.end(); it++) mp[*it]++;

        int major = nums[0];
        for(auto it=nums.begin(); it<nums.end(); it++)
            if(mp[*it] > mp[major])
                major = *it;

        return major;
    }
};

int main(){
    Solution *solution = new Solution();

    vector<int> vec = {3, 2, 3};
    cout << solution->majorityElement(vec) << endl;

    return 0;
}
