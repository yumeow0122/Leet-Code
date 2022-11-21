#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]] >= 2) return true;
        }
        return false;
    }
};

int main(){
    Solution solution;
    vector<int> vec = {1, 2, 3, 0};

    cout << solution.containsDuplicate(vec) << endl;

    return 0;
}
