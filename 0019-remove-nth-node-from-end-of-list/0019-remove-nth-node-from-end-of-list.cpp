/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head, *slow=head;
        while(n--) fast=fast->next;
        if(fast==NULL) return slow->next;
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* dummy=slow->next;
        slow->next=slow->next->next;
        delete(dummy);
        return head;
    }
};