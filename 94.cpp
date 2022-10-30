#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        _inorderTraversal(root);
        return _ans;
    }
private:
    vector<int> _ans;

    void _inorderTraversal(TreeNode* node){
        if(!node) return;

        _inorderTraversal(node->left);
        _ans.push_back(node->val);
        _inorderTraversal(node->right);
    }
};

int main(){
    TreeNode *root = new TreeNode(1);
    TreeNode *rr = new TreeNode(2);
    TreeNode *rrl = new TreeNode(3);

    root->right = rr;
    rr->left = rrl;

    Solution *solution = new Solution();

    vector<int> ans = solution->inorderTraversal(root);
    for(auto it=ans.begin(); it<ans.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}
