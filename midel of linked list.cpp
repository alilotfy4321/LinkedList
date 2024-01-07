//https://leetcode.com/problems/middle-of-the-linked-list/submissions/1139363121


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
    ListNode* middleNode(ListNode* head) {

        ListNode* current=head;
        int count=0;


        while(current!=NULL){
            count++;
            current=current->next;
        }
        
       if(count==1)return head;

        int key=(count/2);
        int n=0;
        ListNode* temp=head;   
        while(temp!=NULL){
            n++;
            temp=temp->next;
            if (n==key) break;
            
        }
        ListNode* nt=temp;

        return nt;
    }
};
