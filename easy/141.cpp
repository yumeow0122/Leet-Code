#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast) {
            fast = fast->next;
            slow = slow->next;
            if(fast) {
                fast = fast->next;
            } else {
                return false;
            }
            if(fast == slow) return true;
        }
        return false;
    }
};

int main(){
    Solution *solution = new Solution();

    ListNode *n0 = new ListNode(0);
    ListNode *n1 = new ListNode(0);
    ListNode *n2 = new ListNode(0);

    n0->next = n1;
    n1->next = n2;
    n2->next = n0;

    cout << solution->hasCycle(n0) << endl;
    return 0;
}
