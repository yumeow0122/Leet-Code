#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cur = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                nums[cur] = nums[i];
                cur++;
            }
        }

        for(; cur<nums.size(); cur++){
            nums[cur] = 0;
        }
    }
};

int main(){
    Solution solution;
    vector<int> nums = {0,1,0,3,12};
    solution.moveZeroes(nums);

    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}