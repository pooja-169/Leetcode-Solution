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
        ListNode* slow=head;
        ListNode* fast=head;
        while(n>0){
            fast=fast->next;
            n--;
        }
        if(fast==NULL) {
         if(head->next==NULL){
            delete head;
            head=NULL;
            return head;
         }
        else{
            ListNode* nxt=head->next;
            head->next=NULL;
            delete head;
            head=nxt;
            return head;
        }
        }
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* tmp=slow->next->next;
        slow->next->next=NULL;
        delete slow->next;
        slow->next=tmp;
        return head;
    }
};