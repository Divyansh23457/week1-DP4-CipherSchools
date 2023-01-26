/*
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. 
If the two linked lists have no intersection at all, return null.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
typedef ListNode Node;
class Solution {
public:
    int count(Node * head){
        if(!head) return 0;
        return 1 + count(head->next);
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = count(headA);
        int len2 = count(headB);
        int diff = abs(len1 - len2);
        if(len1 > len2){
            for(int i = 1;i<=diff;i++) headA=headA->next;
        }
        else{
            for(int i=1;i<=diff;i++) headB=headB->next;
        }
        while(headA && headB && headA != headB) {
            headA= headA->next;
            headB=headB->next;
        }
        return headA;
    }
};
