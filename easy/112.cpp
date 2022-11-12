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
    bool hasPathSum(TreeNode* node, int target) {
        if(!node) return false;

        target -= node->val;

        if(target == 0 && !node->left && !node->right) return true;

        return hasPathSum(node->left, target) || hasPathSum(node->right, target);
    }
};

int main(){
    Solution *solution = new Solution();

    TreeNode *root = new TreeNode(1);
    TreeNode *node1 = new TreeNode(2);
    TreeNode *node2 = new TreeNode(3);
    root->left = node1;
    node1->right = node2;

    cout << solution->hasPathSum(root, 6) << endl;
}
