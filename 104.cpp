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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return _maxDepth(root, 0) + 1;
    }

private:
    int _maxDepth(TreeNode* node, int dep){
        int lmax = 0, rmax = 0;
        if(node->left) lmax = _maxDepth(node->left, dep + 1);
        if(node->right) rmax = _maxDepth(node->right, dep + 1);

        return max(lmax, max(rmax, dep));
    }
};

int main(){
    Solution *solution = new Solution();

    TreeNode *root = new TreeNode(1);
    TreeNode *node1 = new TreeNode(2);
    TreeNode *node2 = new TreeNode(3);
    root->left = node1;
    node1->right = node2;

    cout << solution->maxDepth(root) << endl;
}
