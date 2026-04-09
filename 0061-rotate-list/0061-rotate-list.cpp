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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return head;

        int count = 0;
        ListNode* temp = head;
        ListNode* last = NULL;

        while(temp != NULL){
            last = temp;
            temp = temp->next;
            count++;
        }

        k = k % count;
        if(k == 0) return head;

        last->next = head;

        ListNode* newTail = head;
        for(int i = 0; i < count - k - 1; i++){
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;

    }
};