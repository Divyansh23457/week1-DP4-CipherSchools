// Given the head of a singly linked list, reverse the list, and return the reversed list.
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
    ListNode* reverseListRecursively(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *newHead = reverseListRecursively(head->next);
        head->next->next = head;
        head->next= NULL;
        return newHead;
    }  
};
