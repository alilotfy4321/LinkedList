//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/1137995841
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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        int result=0;
    
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }

        count=count-1;
        ListNode* current=head;
         
         while(current!=NULL){
          int x =current->val;
          result+=pow(2,count)*x;
          current=current->next;
           count--;
         }
        
  return result; 

    }
};
