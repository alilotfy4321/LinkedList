//https://leetcode.com/problems/reverse-linked-list/submissions/1139385185

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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* current=head;
        ListNode* nex=head;

        while(current!=NULL){
            nex=current->next;
            current->next=prev;
            prev=current;
            current=nex;
        }
        head=prev;
        return head;
    }
};
