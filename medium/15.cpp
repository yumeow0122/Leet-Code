#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< vector<int> > ans;
        unordered_map<int,int> ump;

        sort(nums.begin(),nums.end());

        for (int i=0;i<nums.size();++i) ump[nums[i]]=i;

        for (int i=0;i<nums.size();){
            for (int j=i+1;j<nums.size();){
                int k=0-nums[i]-nums[j];
                
                if (k<nums[j]) break;
                if (k==nums[j]&&j==ump[k]) break;

                if (ump.find(k)!=ump.end()){
                    ans.push_back({nums[i], nums[j], k});
                }
                j=ump[nums[j]]+1;
            }
            i=ump[nums[i]]+1;
        }
        return ans;
    }
};

int main(){
    Solution solution;

    vector<int> nums = {-1,0,1,2,-1,-4};

    vector<vector<int>> result = solution.threeSum(nums);
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}