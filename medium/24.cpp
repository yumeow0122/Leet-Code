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
    ListNode* swapPairs(ListNode* head) {
        ListNode **cur = &head, *tmp, *nxt;
        while ((tmp = *cur) && (nxt = tmp->next)) {
            tmp->next = nxt->next;
            nxt->next = tmp;
            *cur = nxt;
            cur = &(tmp->next);
        }
        return head;
    }
};

void print(ListNode *head){
    ListNode *cur = head;
    while (cur){
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << endl;
    
}

int main(){
    vector<ListNode *> vec;
    for(int i=0; i<4; i++){
        ListNode *node = new ListNode(i+1);
        vec.push_back(node);

        if(i != 0)
            vec[i-1]->next = node;
    }

    print(vec[0]);
    Solution solution;
    ListNode *result = solution.swapPairs(vec[0]);
    print(vec[1]);
    return 0;
}