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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || n < 0) return head;
        if(!head->next) return nullptr;

        int len = 0;
        ListNode *cur = head;
        while(cur) {
            len ++;
            cur = cur->next;
        }

        if(len == n) return head->next;

        cur = head;
        int temp = len - n - 1;
        while(temp--) cur = cur->next;
        cur->next =cur->next->next;
        return head;
    }
};

void print(ListNode* head) {

    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
    vector<ListNode *> vec;
    for(int i=0; i<1; i++) {
        ListNode *node = new ListNode(i+1);
        vec.push_back(node);
        if(i != 0) vec[i-1]->next = vec[i];
    }

    print(vec[0]);

    Solution solution;
    solution.removeNthFromEnd(vec[0], 1);

    print(vec[0]);
    return 0;
}