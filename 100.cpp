#include <iostream>

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return _inorder(p, q);
    }
private:
    bool _inorder(TreeNode *node1, TreeNode *node2){
        if(node1 == NULL && node2 == NULL) return true;
        if(node1 == NULL || node2 == NULL) return false;
        if(node1->val == node2->val &&
            _inorder(node1->left, node2->left) && _inorder(node1->right, node2->right))
            return true;
        return false;

    }
};

int main(){
    Solution *solution = new Solution();

    TreeNode *root1 = new TreeNode(1);
    TreeNode *tree1Node1 = new TreeNode( );
    TreeNode *tree1Node2 = new TreeNode(3);

    root1->left = tree1Node1;
    root1->right = tree1Node2;

    TreeNode *root2 = new TreeNode(1);
    TreeNode *tree2Node1 = new TreeNode();
    TreeNode *tree2Node2 = new TreeNode(3);

    root2->left = tree2Node1;
    root2->right = tree2Node2;

    cout << solution->isSameTree(root1, root2) << endl;
    return 0;
}
