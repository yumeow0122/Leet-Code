#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head){
        if(!head) return NULL;

        ListNode *curNode = head;
        ListNode *prevNode = NULL;
        ListNode *nextNode = new ListNode();

        while(curNode){
            nextNode = curNode->next;
            curNode->next = prevNode;
            prevNode = curNode;
            curNode = nextNode;
        }

        return prevNode;
    }

    void printList(ListNode *cur){
        while(cur){
            cout << cur->val << " ";
            cur = cur->next;
        }
        cout << endl;
    }
};

int main(){
    Solution solution;

    ListNode *n0 = new ListNode(0);
    ListNode *n1 = new ListNode(1);
    ListNode *n2 = new ListNode(2);
    ListNode *n3 = new ListNode(3);

    n0->next = n1;
    n1->next = n2;
    n2->next = n3;

    solution.printList(n0);
    n0 = solution.reverseList(n0);
    solution.printList(n0);

    return 0;
}
