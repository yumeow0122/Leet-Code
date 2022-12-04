#include <bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
        ListNode *cur1 = l1;
        ListNode *cur2 = l2;

        ListNode *ans = new ListNode(0);
        ListNode *cur = ans;
        int carry = 0;
        while(cur1 || cur2 || carry){
            int sum = (cur1? cur1->val:0) + (cur2? cur2->val:0) + carry;
            carry = sum/10;

            cur->next = new ListNode(sum%10);

            cur = cur->next;
            cur1 = cur1? cur1->next : cur1;
            cur2 = cur2? cur2->next : cur2;
        }
        
        return ans->next;
    }
};

int main(){
    Solution solution;

    ListNode* n0 = new ListNode(0);
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);

    n0->next = n1;
    n2->next = n3;

    ListNode *ans = solution.addTwoNumbers(n0, n2);
    while(ans){
        cout << ans->val << " ";
        ans = ans->next;
    }

    return 0;
}