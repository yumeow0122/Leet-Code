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
    int minDepth(TreeNode* root) {
        if (!root) return 0;

        queue<TreeNode*> que;
        que.push(root);
        int val = 0;
        while (!que.empty()) {
            val++;
            int j = que.size();
            for (int i=0; i<j; i++) {
                TreeNode* cur = que.front();
                if (cur->left) que.push(cur->left);
                if (cur->right) que.push(cur->right);
                que.pop();

                if (!cur->left && !cur->right) return val;
            }
        }
        return -1;
    }
};

int main(){
    Solution *solution = new Solution();

    TreeNode *root = new TreeNode(1);
    TreeNode *node1 = new TreeNode(2);
    TreeNode *node2 = new TreeNode(3);
    root->left = node1;
    node1->right = node2;

    cout << solution->minDepth(root) << endl;
}
