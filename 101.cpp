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

class Solution{
public:
    bool isSymmetric(TreeNode* root){
        if(!root) return true;

        queue<TreeNode*> que1, que2;
        que1.push(root->left);
        que2.push(root->right);

        while(!que1.empty() && !que2.empty()){
            TreeNode *node1 = que1.front();
            TreeNode *node2 = que2.front();
            que1.pop(), que2.pop();

            if(!node1 && !node2) continue;
            if(!node1 || !node2) return false;
            if(node1->val != node2->val) return false;

            que1.push(node1->left);
            que1.push(node1->right);
            que2.push(node2->right);
            que2.push(node2->left);
        }
        return true;
    }
};

int main(){
    Solution *solution = new Solution();

    TreeNode *root = new TreeNode(1);
    TreeNode *node1 = new TreeNode(2);
    TreeNode *node2 = new TreeNode();
    root->left = node1;
    root->right = node2;

    cout << solution->isSymmetric(root) << endl;
}
