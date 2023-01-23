/*Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
You may not alter the values in the list's nodes, only nodes themselves may be changed.*/
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
    int counter(ListNode* head){
        if(!head) return 0;
        return 1 + counter(head->next);
    } 

    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt= 0;
        // if(!head || !head->next)return head;
        if(!head) return head;
        // if(counter(head) < k) return head;
        ListNode *curr= head,*prev = NULL,*next = NULL;
        while(curr && cnt<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }
        if(next) head->next = reverseKGroup(next,k);
        return prev;
    }
};
