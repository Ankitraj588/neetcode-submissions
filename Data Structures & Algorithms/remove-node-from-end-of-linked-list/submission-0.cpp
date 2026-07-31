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
        // brute force 
        vector<ListNode*>ans;
        ListNode* temp=head;
        while(temp){
            ans.push_back(temp);
            temp=temp->next;
        }
        int x=ans.size()-n;
        if(x==0)return head->next;

        ans[x-1]->next=ans[x]->next;
        return head;


    }
};
