#include <bits/stdc++.h>

using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };


class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode *ptr1 = headA;
		ListNode *ptr2 = headB;
		int count = 0;

		while(ptr1 != ptr2){
            count++;
			if(ptr1 == NULL){
				ptr1 = headB;
			}
			else{
				ptr1 = ptr1 -> next;
			}
			if(ptr2 == NULL){
				ptr2 = headA;
			}
			else{
				ptr2 = ptr2 -> next;
			}
		}

		cout << count << endl;
		return ptr1;
	}
};

int main(){
    ListNode *n0 = new ListNode(4);
    ListNode *n1 = new ListNode(1);
    ListNode *n2 = new ListNode(8);
    ListNode *n3 = new ListNode(4);
    ListNode *n4 = new ListNode(5);

    ListNode *n5 = new ListNode(5);
    ListNode *n6 = new ListNode(6);
    ListNode *n7 = new ListNode(1);


    n0->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;

    n5->next=n6;
    n6->next=n7;
    n7->next=n2;

    Solution *solution = new Solution();

    solution->getIntersectionNode(n0, n5);


}
