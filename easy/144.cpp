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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> route;
        stack<TreeNode *> stk;

        if(!root) return route;

        stk.push(root);
        while(!stk.empty()){
            TreeNode *cur = stk.top();
            stk.pop();

            route.push_back(cur->val);

            if(cur->right) stk.push(cur->right);
            if(cur->left) stk.push(cur->left);
        }

        return route;
    }
};

int main(){
    Solution *solution = new Solution();

    TreeNode *n0 = new TreeNode(0);
    TreeNode *n1 = new TreeNode(1);
    TreeNode *n2 = new TreeNode(2);

    n0->left = n1;
    n0->right = n2;

    vector<int> route = solution->preorderTraversal(n0);
    for(int i=0; i<route.size(); i++)
        cout << route[i] << endl;

    return 0;
}
