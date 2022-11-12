#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i = m - 1, j = n - 1, k = m + n - 1;
     while(i >= 0 and j >= 0) {
         if(nums1[i] < nums2[j]){
             nums1[k--] = nums2[j--];
         }
         else {
             nums1[k--] = nums1[i--];
         }
     }
     while(j >= 0) {
         nums1[k--] = nums2[j--];
     }
 }
};

int main(){
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    Solution *solution = new Solution();
    solution->merge(nums1, m, nums2, n);

    for(auto it=nums1.begin(); it<nums1.end(); it++)
        cout << *it << " ";

    return 0;
}
