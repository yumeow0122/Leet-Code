#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val, state;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curNode = head;
        while(curNode && curNode->next != NULL){
            ListNode *nextNode = curNode->next;
            if(curNode->val == nextNode->val){
                curNode->next = nextNode->next;
                delete nextNode;
            }
            else curNode = curNode->next;
        }
        return head;
    }
};
int main(){
    int t1 = 2, t2 = 3;

    Solution *solution = new Solution();

    ListNode *n0 = new ListNode(1);
    ListNode *n1 = new ListNode(1);
    ListNode *n2 = new ListNode(1);


    n0->next = n1;
    n1->next = n2;


    n0 = solution->deleteDuplicates(n0);

    ListNode *cur = n0;
    while(cur != NULL){
        cout << cur->val << " " << endl;
        cur = cur->next;
    }
    return 0;
}
