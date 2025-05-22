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
    
    ListNode* rev(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* nxt = NULL;

        while (head != NULL) {
            nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

      
        ListNode* tmp = rev(slow);

       
        ListNode* curr = head;
        while (tmp) {
            if (curr->val != tmp->val)
                return false;
            curr = curr->next;
            tmp = tmp->next;
        }

        return true;
    }
};
