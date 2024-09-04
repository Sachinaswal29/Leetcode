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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<pair<int,ListNode*>>v;
        for(int i=0;i<lists.size();i++){
            if(lists[i]) v.push_back({lists[i]->val,lists[i]});
        }

        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq(v.begin(),v.end());
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        while(!pq.empty()){
            temp->next=pq.top().second;
            temp=temp->next;
            pq.pop();
            if(temp->next) pq.push({temp->next->val,temp->next});
        }
        return head->next;
    }
};