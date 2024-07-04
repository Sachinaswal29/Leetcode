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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newHead=head;
        ListNode* temp=head;
        head=head->next;
        int sum=0;
        while(head){
            sum+=head->val;
            if(head->val==0){
                head->val=sum;
                sum=0;
                temp->next=head;
                temp=temp->next;
                head=head->next;
            }
            else{
            ListNode* todelete=head;
            head=head->next;
            delete todelete;
            }
        }
        return newHead->next;
    }
};