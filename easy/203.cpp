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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *cur = head;
        while(head != NULL && head->val == val) head = head->next;

        while(cur){
            if(cur->next && cur->next->val == val){
                if(cur->next->next) cur->next = cur->next->next;
                else cur->next = NULL;
            }
            else{
                cur = cur->next;
            }
        }

        return head;
    }

    void printLink(ListNode * head){
        ListNode * cur = head;
        while(cur){
            cout << cur->val << " ";
            cur = cur->next;
        }
        cout << endl;
    }
};

int main(){
    ListNode *n0 = new ListNode(1);
    ListNode *n1 = new ListNode(2);
    ListNode *n2 = new ListNode(2);
    ListNode *n3 = new ListNode(1);
    ListNode *n4 = new ListNode(1);

    n0 ->next = n1;
    n1 ->next = n2;
    n2 ->next = n3;
    n3 ->next = n4;

    Solution solution;

    solution.printLink(n0);

    n0 = solution.removeElements(n0, 2);

    solution.printLink(n0);

    return 0;
}
