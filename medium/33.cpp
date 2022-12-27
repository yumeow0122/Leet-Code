#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int result = -1;
        int vecSize = nums.size();

        vector<int>::iterator it = std::find(nums.begin(), nums.end(), target); // find 10
        if (it != nums.end())
            result = distance(nums.begin(), it);

        return result;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {4,5,6,7,0,1,2};
    cout << solution.search(nums, 0) << endl;
    return 0;
}