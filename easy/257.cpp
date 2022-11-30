#include <bits/stdc++.h>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left(left), right(right){}
};

class Solution {
    vector<string> ans;
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == NULL) return this->ans;
        
        _binaryTreePaths(root, to_string(root->val));
        return this->ans;
    }

private:
    void _binaryTreePaths(TreeNode* node, string path) {
        if(!node->left && !node->right){
            this->ans.push_back(path);
        }

        if(node->left)
            _binaryTreePaths(node->left, path + "->" + to_string(node->left->val));
        if(node->right)
            _binaryTreePaths(node->right, path + "->" + to_string(node->right->val));
        
    }
};

int main(){
    vector<string> vec;
    Solution solution;
    return 0;
}