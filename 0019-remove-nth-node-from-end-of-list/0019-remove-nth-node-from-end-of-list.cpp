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
        // int count=0;
        // ListNode* temp = head;
        // ListNode* ans= head;
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        // while(temp != nullptr){
        //     count++;
        //     temp= temp->next;
        // }
        // int m = count-n;
        // if(m==0){
        //     head=head->next;
        //     return head;
        // }
        // for(int i=1; i<m;i++){
        //     ans=ans->next;
        // }
        // ans->next= ans->next->next;
        // return head;
        ListNode* slow= head;
        ListNode*fast = head;
        
        for(int i=0; i<n;i++){
            fast= fast->next;
        }
        if(fast == nullptr){
            return head->next;
        }
        while(fast->next!= nullptr){
            slow=slow->next; fast= fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};