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
    ListNode* reverse(ListNode* node){
        ListNode* prev=NULL;
        ListNode* nxt=NULL;
        while(node){
            nxt=node->next;
            node->next=prev;
            prev=node;
            node=nxt;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        ListNode* start=head;
        ListNode* end=slow->next;
        while(end){
            if(start->val!=end->val) return false;
            else start=start->next,end=end->next;
        }
        return true;
    }
};