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
    private:
    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }return prev;
    }

public:
    ListNode* removeNodes(ListNode* head) {
        head=reverse(head);
        
        ListNode* prev=head;
        ListNode* curr=head->next;
        int maxi=head->val;

        while(curr){
            if(curr->val>=maxi){
                maxi=curr->val;
                prev=curr;
                curr=curr->next;
            }
            else{
                prev->next=curr->next;
                curr=prev->next;
            }
        }
        return reverse(head);
    }
};