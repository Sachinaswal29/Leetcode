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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*>mp;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        mp[0]=dummy;
        int prevSum=0;
        while(head!=NULL){
           prevSum+=head->val;
           if(mp.find(prevSum)==mp.end()) mp[prevSum]=head;
           else{
            ListNode* temp=mp[prevSum];
            int tempPrevSum=prevSum;
            while(temp!=head){
                temp=temp->next;
                tempPrevSum+=temp->val;
                if(temp!=head) mp.erase(tempPrevSum);
            }
            mp[prevSum]->next=head->next;
           }
           head=head->next;
        }
        return dummy->next;
    }
};