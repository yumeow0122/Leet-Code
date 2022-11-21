#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int dis) {
        unordered_map<int, pair<int, int>> mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].first++;
            if(mp[nums[i]].first >= 2 && i-mp[nums[i]].second <= dis) return true;
            mp[nums[i]].second = i;
        }
        return false;
    }
};

int main(){
    Solution solution;
    vector<int> vec = {1, 2, 3, 1};

    cout << solution.containsNearbyDuplicate(vec, 3) << endl;

    return 0;
}
