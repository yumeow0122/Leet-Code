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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> route;
        stack<TreeNode *> stk;

        if(!root) return route;

        stk.push(root);
        while(!stk.empty()){
            TreeNode *cur = stk.top();

            if(!cur->left && !cur->right){
                stk.pop();
                route.push_back(cur->val);
            }

            if(cur->right){
                stk.push(cur->right);
                cur->right = NULL;
            }
            if(cur->left){
                stk.push(cur->left);
                cur->left = NULL;
            }
        }

        return route;
    }
};

int main(){
    Solution *solution = new Solution();

    TreeNode *n0 = new TreeNode(0);
    TreeNode *n1 = new TreeNode(1);
    TreeNode *n2 = new TreeNode(2);

    n0->right = n1;
    n1->left = n2;

    vector<int> route = solution->postorderTraversal(n0);
    for(int i=0; i<route.size(); i++)
        cout << route[i] << endl;

    return 0;
}
