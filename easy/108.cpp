#include <bits/stdc++.h>

using namespace std;


struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return _sortedArrayToBST(nums, 0, nums.size()-1);
    }

private:
    TreeNode* _sortedArrayToBST(vector<int>& nums, int left, int right) {
        if(left > right) return NULL;

        int mid = left + (right - left) / 2;
        TreeNode *node = new TreeNode(nums[mid]);

        node->left = _sortedArrayToBST(nums, left, mid-1);
        node->right = _sortedArrayToBST(nums, mid+1, right);

        return node;
    }
};

int main(){
    Solution *solution = new Solution();

    TreeNode *root = new TreeNode(1);
    TreeNode *node1 = new TreeNode(2);
    TreeNode *node2 = new TreeNode(3);
    root->left = node1;
    node1->right = node2;

    //cout << solution->sortedArrayToBST(root) << endl;
}
