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
    bool isBalanced(TreeNode* root) {
        return _isBalanced(root) != -1;
    }

private:
    int _isBalanced(TreeNode* node){
        if(!node) return 0;

        int lh = _isBalanced(node->left);
        if(lh == -1) return -1;

        int rh = _isBalanced(node->right);
        if(rh == -1) return -1;

        if(abs(lh - rh) > 1) return -1;

        return 1 + max(lh, rh);
    }
};

int main(){
    Solution *solution = new Solution();

    TreeNode *root = new TreeNode(1);
    TreeNode *node1 = new TreeNode(2);
    TreeNode *node2 = new TreeNode(3);
    root->left = node1;
    node1->right = node2;

    cout << solution->isBalanced(root) << endl;
}
