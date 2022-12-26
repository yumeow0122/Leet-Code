#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    	int vecSize = nums.size(), kIdx, lIdx;
    	for (kIdx = vecSize - 2; kIdx >= 0; kIdx--) {
            if (nums[kIdx] < nums[kIdx + 1]) break;
        }
    	if (kIdx < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (lIdx = vecSize - 1; lIdx > kIdx; lIdx--) {
                if (nums[lIdx] > nums[kIdx]) break;
            } 
            
    	    swap(nums[kIdx], nums[lIdx]);
    	    reverse(nums.begin() + kIdx + 1, nums.end());
        }
    }
}; 

int main(){
    Solution solution;
    vector<int> permutation = {1,2,3};
    solution.nextPermutation(permutation);
    return 0;
}