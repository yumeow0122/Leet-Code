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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;

        queue<TreeNode* >que;
        que.push(root);
        while(!que.empty()){
            TreeNode *cur = que.front();
            que.pop();

            swap(cur->left, cur->right);

            if(cur->left) que.push(cur->left);
            if(cur->right) que.push(cur->right);
        }
        return root;
    }
};

int main(){
    TreeNode *n0 = new TreeNode(0);
    TreeNode *n1 = new TreeNode(1);
    TreeNode *n2 = new TreeNode(2);

    n0->left = n1;
    n0->right = n2;

    Solution solution;
    cout << solution.invertTree(n0);

    return 0;
}
