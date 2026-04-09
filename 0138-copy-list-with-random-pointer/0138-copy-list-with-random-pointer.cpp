/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insert(Node* head){
        Node* temp = head;
        while(temp != NULL){
            Node* neww = new Node(temp->val);
            Node* nextNode = temp->next;   
            temp->next = neww;             
            neww->next = nextNode;         

            temp = nextNode;                
        }
    }
    void connectRandom(Node* head){
        Node* temp = head;
        while(temp != NULL){
            if(temp->random == NULL){
                temp->next->random = NULL;
            } else {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }
    }
    Node* deepCopy(Node* head){
        Node* temp = head;
        Node* ans= head->next;
        while(temp != NULL){
            Node* copy= temp->next;
            temp->next= copy->next;
            if(copy->next != NULL){
                copy->next = copy->next->next;
            } else {
                copy->next = NULL;
            }
            temp = temp->next;
        }
        return ans;  
    }
    Node* copyRandomList(Node* head) {
        if(head==NULL){return NULL;}
        insert(head);connectRandom(head);
        return deepCopy(head);
    }
};